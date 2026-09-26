"""Transfer fingertip goals through each glove's anatomical palm frame.

Local quaternion deltas are not portable between differently oriented finger
bones. This fits three actual digits, preserving the male's original firing grip
outside the authored manipulation and keeping every phalanx length unchanged.
"""
import math
from mathutils import Matrix, Quaternion, Vector

DIGITS=('Thumb','Index','Middle')
HAND='mixamorig:RightHand'

def palm_basis(rest):
    hand_inv=rest[HAND].inverted()
    forward=(hand_inv@rest[HAND+'Middle1'].translation).normalized()
    across=hand_inv@rest[HAND+'Thumb1'].translation
    across-=forward*across.dot(forward);across.normalize()
    normal=across.cross(forward).normalized()
    return Matrix((across,forward,normal)).transposed()

def fit(target,source,rest_source,rest_target,weight):
    if weight<=0:return 0.
    mapping=palm_basis(rest_target)@palm_basis(rest_source).inverted()
    source_hand_inv=source.pose.bones[HAND].matrix.inverted()
    target_hand=target[HAND];target_hand_inv=target_hand.inverted()
    worst=0.
    for digit in DIGITS:
        names=[HAND+digit+str(i) for i in range(1,5)]
        source_root=source_hand_inv@source.pose.bones[names[0]].matrix.translation
        source_tip=source_hand_inv@source.pose.bones[names[-1]].matrix.translation
        root=target_hand_inv@target[names[0]].translation
        source_length=sum((rest_source[b].translation-rest_source[a].translation).length for a,b in zip(names,names[1:]))
        target_length=sum((rest_target[b].translation-rest_target[a].translation).length for a,b in zip(names,names[1:]))
        delta=mapping@(source_tip-source_root)*(target_length/source_length)
        if delta.length>target_length*.985:delta=delta.normalized()*target_length*.985
        goal=target_hand@(root+delta)
        original={n:target[n].copy() for n in names}
        solved={n:target[n].copy() for n in names}
        for _ in range(32):
            if (solved[names[-1]].translation-goal).length<.00035:break
            for joint in [2,1,0]:
                pivot=solved[names[joint]].translation.copy()
                current=solved[names[-1]].translation-pivot;desired=goal-pivot
                if min(current.length,desired.length)<1e-7:continue
                delta_q=current.rotation_difference(desired)
                amount=min(.75,math.radians(25)/max(delta_q.angle,1e-6))
                q=Quaternion().slerp(delta_q,amount)
                for n in names[joint:]:
                    m=solved[n]
                    solved[n]=Matrix.LocRotScale(pivot+q@(m.translation-pivot),q@m.to_quaternion(),m.to_scale())
        if weight>.999:worst=max(worst,(solved[names[-1]].translation-goal).length*100)
        # Blend in local joint space so phalanges remain connected at any weight.
        for i,n in enumerate(names):
            old_parent=original[names[i-1]] if i else target_hand
            fitted_parent=solved[names[i-1]] if i else target_hand
            old=old_parent.inverted()@original[n];fitted=fitted_parent.inverted()@solved[n]
            local=Matrix.LocRotScale(old.translation,old.to_quaternion().slerp(fitted.to_quaternion(),weight),old.to_scale())
            parent=target[names[i-1]] if i else target_hand
            target[n]=parent@local
    return worst
