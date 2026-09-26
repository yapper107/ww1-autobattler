"""Restore distinct flat brass, arcane tips and steel on the handling props.

Fresh disposable FBX imports recover section assignments lost by older imports
with material creation disabled. Existing runtime geometry is left intact.
"""
import json
import re
import uuid
from pathlib import Path
import unreal

project=Path(unreal.Paths.project_dir())
palette={'handlingbrass':(.48,.28,.065,1),'handlingcyan':(.025,.48,.7,1),
         'handlingcharcoalsteel':(.035,.042,.05,1)}
assets=unreal.AssetToolsHelpers.get_asset_tools()
editor=unreal.get_default_object(unreal.StaticMeshEditorSubsystem)
folder='/Game/Characters/GASP/Equipment/HandlingRepair_'+uuid.uuid4().hex
reports=[]
try:
    for name in ['SM_Bolt','SM_ReloadClip']:
        task=unreal.AssetImportTask();task.filename=str(project/'Art/female_rifle'/(name+'.fbx'))
        task.destination_path=folder;task.destination_name=name;task.automated=True;task.save=False
        opt=unreal.FbxImportUI();opt.automated_import_should_detect_type=False
        opt.import_mesh=True;opt.import_materials=True;opt.import_textures=False
        opt.import_as_skeletal=False;opt.import_animations=False
        opt.mesh_type_to_import=unreal.FBXImportType.FBXIT_STATIC_MESH
        data=opt.static_mesh_import_data;data.combine_meshes=True;data.auto_generate_collision=False
        data.convert_scene=True;data.convert_scene_unit=True;data.force_front_x_axis=False
        data.normal_import_method=unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS
        task.factory=unreal.FbxFactory();task.options=opt;assets.import_asset_tasks([task])
        fresh=unreal.load_asset(folder+'/'+name);target=unreal.load_asset('/Game/Characters/FemaleRifle/'+name)
        assert fresh and target
        assert fresh.get_num_sections(0)==target.get_num_sections(0),(name,fresh.get_num_sections(0),target.get_num_sections(0))
        mapping=[editor.get_lod_material_slot(fresh,0,i) for i in range(fresh.get_num_sections(0))]
        slots=list(fresh.static_materials)
        for i,slot in enumerate(slots):
            key=re.sub('[^a-z0-9]','',str(slot.material_slot_name).lower());color=palette[key]
            dest='/Game/Characters/FemaleRifle';mat_name='M_'+key
            mat=unreal.load_asset(dest+'/'+mat_name) or assets.create_asset(mat_name,dest,unreal.Material,unreal.MaterialFactoryNew())
            edit=unreal.MaterialEditingLibrary;edit.delete_all_material_expressions(mat)
            tint=edit.create_material_expression(mat,unreal.MaterialExpressionVectorParameter,-200,0)
            tint.set_editor_property('parameter_name','Tint');tint.set_editor_property('default_value',unreal.LinearColor(*color))
            edit.connect_material_property(tint,'',unreal.MaterialProperty.MP_BASE_COLOR)
            if key in ['handlingbrass','handlingcyan']:
                # Cartridges disappear only as they pass through the receiver
                # mouth. Local X is the ammunition row before its insertion turn.
                mat.set_editor_property('blend_mode',unreal.BlendMode.BLEND_MASKED)
                def link(a,b,pin):assert edit.connect_material_expressions(a,'',b,pin)
                position=edit.create_material_expression(mat,unreal.MaterialExpressionPreSkinnedPosition,-900,400)
                local=edit.create_material_expression(mat,unreal.MaterialExpressionVertexInterpolator,-700,400)
                link(position,local,'')
                component=edit.create_material_expression(mat,unreal.MaterialExpressionVectorParameter,-700,600)
                component.set_editor_property('parameter_name','FeedAxis')
                component.set_editor_property('default_value',unreal.LinearColor(1,0,0,0))
                axis=edit.create_material_expression(mat,unreal.MaterialExpressionDotProduct,-500,400)
                link(local,axis,'A');link(component,axis,'B')
                limit=edit.create_material_expression(mat,unreal.MaterialExpressionScalarParameter,-300,600)
                limit.set_editor_property('parameter_name','FeedLimit');limit.set_editor_property('default_value',100)
                difference=edit.create_material_expression(mat,unreal.MaterialExpressionSubtract,-100,450)
                link(limit,difference,'A');link(axis,difference,'B')
                edge=edit.create_material_expression(mat,unreal.MaterialExpressionMultiply,100,450);edge.set_editor_property('const_b',100)
                link(difference,edge,'A');assert edit.connect_material_property(edge,'',unreal.MaterialProperty.MP_OPACITY_MASK)
            for prop,value,y in [(unreal.MaterialProperty.MP_ROUGHNESS,.95,150),(unreal.MaterialProperty.MP_SPECULAR,.1,250)]:
                node=edit.create_material_expression(mat,unreal.MaterialExpressionConstant,-200,y);node.set_editor_property('r',value)
                edit.connect_material_property(node,'',prop)
            if key in ['handlingbrass','handlingcyan']:
                # Older opaque palette assets retain their optimization flag.
                # Merely connecting the opacity mask does not invalidate it.
                assert unreal.GaspAuthoringLibrary.finalize_handling_feed_material(mat)
            errors=edit.recompile_material(mat);assert not errors,errors
            unreal.EditorAssetLibrary.save_loaded_asset(mat)
            slot.set_editor_property('material_interface',mat);slots[i]=slot
        target.set_editor_property('static_materials',slots)
        for section,slot in enumerate(mapping):editor.set_lod_material_slot(target,slot,0,section)
        unreal.EditorAssetLibrary.save_loaded_asset(target,only_if_is_dirty=False)
        assert [editor.get_lod_material_slot(target,0,i) for i in range(target.get_num_sections(0))]==mapping
        reports.append({'mesh':target.get_path_name(),'slots':[str(s.material_slot_name) for s in slots],'sections':mapping})
    (project/'Saved/AnimationReview/handling-material-repair.json').write_text(json.dumps(reports,indent=2))
    unreal.log('ARMY_HANDLING_PALETTE '+json.dumps(reports))
finally:
    if unreal.EditorAssetLibrary.does_directory_exist(folder):unreal.EditorAssetLibrary.delete_directory(folder)
