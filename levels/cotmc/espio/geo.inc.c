#include "src/game/envfx_snow.h"

const GeoLayout espio_Head_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 97, 0, espio_Head_mesh_layer_1_mat_override_eyes_halfopen_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout espio_Head_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 97, 0, espio_Head_mesh_layer_1_mat_override_eyes_closed_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout espio_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 204, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 8520),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, espio_Root_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, espio_Chest_skinned_mesh_layer_1),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 178, 0, espio_Chest_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_npc_face),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 97, 0, espio_Head_mesh_layer_1),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, espio_Head_Switch_opt1),
							GEO_BRANCH(1, espio_Head_Switch_opt2),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 88, 56, 0, espio_lArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, espio_lArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 117, 0, 0, espio_lArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 232, 0, 0, espio_lArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -88, 56, 0, espio_rArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, espio_rArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -114, 0, 0, espio_rArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -236, 0, 0, espio_rArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 14, 0, espio_lLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, espio_lLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 3, -163, 0, espio_lLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 4, -257, 0, espio_lLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -52, 15, 0, espio_rLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, espio_rLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -4, -161, 0, espio_rLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -3, -263, 0, espio_rLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, espio_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
