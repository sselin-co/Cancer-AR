import bpy
import pathlib
import mathutils
from math import radians
import shutil
import os

OUT_DIR = "./rendered"

shutil.rmtree(OUT_DIR, ignore_errors=True)
os.makedirs(OUT_DIR, exist_ok=True)

# Adjust this for where you have the OBJ files.
obj_root = pathlib.Path('./prep_result/1.3.6.1.4.1.14519.5.2.1.6279.6001.101228986346984399347858840086/')

bpy.ops.object.select_all(action='DESELECT')
bpy.ops.object.select_by_type(type='MESH')
bpy.ops.object.delete()

bpy.ops.object.select_by_type(type='LAMP')
bpy.ops.object.delete()

# Before we start, make sure nothing is selected. The importer will select
# imported objects, which allows us to delete them after rendering.
bpy.ops.object.select_all(action='DESELECT')
render = bpy.context.scene.render


def point_at(obj, target, roll=0):
    """
    Rotate obj to look at target

    :arg obj: the object to be rotated. Usually the camera
    :arg target: the location (3-tuple or Vector) to be looked at
    :arg roll: The angle of rotation about the axis from obj to target in radians.

    Based on: https://blender.stackexchange.com/a/5220/12947 (ideasman42)
    """
    if not isinstance(target, mathutils.Vector):
        target = mathutils.Vector(target)
    loc = obj.location
    # direction points from the object to the target
    direction = target - loc

    quat = direction.to_track_quat('-Z', 'Y')

    # /usr/share/blender/scripts/addons/add_advanced_objects_menu/arrange_on_curve.py
    quat = quat.to_matrix().to_4x4()
    rollMatrix = mathutils.Matrix.Rotation(roll, 4, 'Z')

    # remember the current location, since assigning to obj.matrix_world changes it
    loc = loc.to_tuple()
    obj.matrix_world = quat * rollMatrix
    obj.location = loc
    scene.render.alpha_mode = 'TRANSPARENT'


scene = bpy.context.scene
scene.render.use_border = False

for obj_fname in obj_root.glob('*.obj'):
    bpy.ops.import_scene.obj(filepath=str(obj_fname))
    bpy.ops.object.origin_set(type='GEOMETRY_ORIGIN')
    scale = 0.2

    # Remember which meshes were just imported
    meshes_to_remove = []
    for ob in bpy.context.selected_objects:
        meshes_to_remove.append(ob.data)

    for ob in bpy.context.selected_objects:
        new_ob = ob
        ob.scale = (scale, scale, scale)

        camera = bpy.data.objects['Camera']
        camera.location.x = ob.location.x + 80.0
        camera.location.y = ob.location.y + 80.0
        camera.location.z = ob.location.z
        camera.data.clip_end = 3000.0

        point_at(camera, ob.location)

        bpy.ops.object.lamp_add(
            type='HEMI',
            location=camera.location,
            rotation=camera.rotation_euler
        )

    lamp1 = bpy.context.active_object.data
    lamp1.name = "Spotlight"
    lamp1.energy = 0.2

    for i in range(0, 60):
        ob = new_ob
        ob.rotation_euler.rotate_axis("Y", radians(6))
        render.filepath = os.path.join(OUT_DIR, 'rendered-%s' % i)
        bpy.ops.render.render(write_still=True)

    bpy.ops.object.delete()

    # Remove the meshes from memory too
    for mesh in meshes_to_remove:
        bpy.data.meshes.remove(mesh)

bpy.ops.wm.quit_blender()