"""Create reproducible, depth-tested emissive materials for the arcane rounds."""
import unreal

dest = '/Game/Effects/Arcane'
assets = unreal.AssetToolsHelpers.get_asset_tools()
edit = unreal.MaterialEditingLibrary

def expression(mat, kind, x, y):
    # Reuse nodes: loaded runtime materials may be rooted by the actor CDO.
    for node in edit.get_material_expressions(mat):
        if isinstance(node, kind) and tuple(edit.get_material_expression_node_position(node)) == (x, y):
            return node
    return edit.create_material_expression(mat, kind, x, y)

for faction, color in [('Azure', (0., .08, 1., 1.)), ('Ember', (1., .045, 0., 1.))]:
    for part in ['Core', 'Glow']:
        name = 'M_' + faction + '_' + part
        mat = unreal.load_asset(dest + '/' + name) or assets.create_asset(name, dest, unreal.Material, unreal.MaterialFactoryNew())
        mat.set_editor_property('shading_model', unreal.MaterialShadingModel.MSM_UNLIT)
        mat.set_editor_property('blend_mode', unreal.BlendMode.BLEND_ALPHA_COMPOSITE)
        mat.set_editor_property('two_sided', False)
        mat.set_editor_property('enable_responsive_aa', True)
        edit.set_material_usage(mat, unreal.MaterialUsage.MATUSAGE_INSTANCED_STATIC_MESHES)
        tint = expression(mat, unreal.MaterialExpressionConstant3Vector, -600, 0)
        tint.set_editor_property('constant', unreal.LinearColor(*color))
        strength = expression(mat, unreal.MaterialExpressionConstant, -600, 120)
        strength.set_editor_property('r', 1.8 if part == 'Core' else 1.0)
        fade = expression(mat, unreal.MaterialExpressionPerInstanceCustomData, -600, 240)
        fade.set_editor_property('data_index', 0)
        fade.set_editor_property('const_default_value', 1)
        interpolated = expression(mat, unreal.MaterialExpressionVertexInterpolator, -400, 240)
        assert edit.connect_material_expressions(fade, '', interpolated, '')
        pulse = expression(mat, unreal.MaterialExpressionMultiply, -200, 140)
        assert edit.connect_material_expressions(strength, '', pulse, 'A')
        assert edit.connect_material_expressions(interpolated, '', pulse, 'B')
        emissive = expression(mat, unreal.MaterialExpressionMultiply, 0, 0)
        assert edit.connect_material_expressions(tint, '', emissive, 'A')
        assert edit.connect_material_expressions(pulse, '', emissive, 'B')
        # Premultiply below, so the terrain cannot wash the faction colour out.
        fresnel = expression(mat, unreal.MaterialExpressionFresnel, -400, 450)
        fresnel.set_editor_property('exponent', 1.5)
        fresnel.set_editor_property('base_reflect_fraction', 0)
        center = expression(mat, unreal.MaterialExpressionOneMinus, -200, 450)
        assert edit.connect_material_expressions(fresnel, '', center, '')
        opacity = expression(mat, unreal.MaterialExpressionMultiply, 0, 450)
        assert edit.connect_material_expressions(center, '', opacity, 'A')
        assert edit.connect_material_expressions(interpolated, '', opacity, 'B')
        assert edit.connect_material_property(opacity, '', unreal.MaterialProperty.MP_OPACITY)
        premultiplied = expression(mat, unreal.MaterialExpressionMultiply, 200, 0)
        assert edit.connect_material_expressions(emissive, '', premultiplied, 'A')
        assert edit.connect_material_expressions(center, '', premultiplied, 'B')
        assert edit.connect_material_property(premultiplied, '', unreal.MaterialProperty.MP_EMISSIVE_COLOR)
        edit.recompile_material(mat)
        unreal.EditorAssetLibrary.save_loaded_asset(mat)
print('ARCANE_MATERIALS_OK')
