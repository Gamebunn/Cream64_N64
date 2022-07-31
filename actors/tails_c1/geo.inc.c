#include "src/game/envfx_snow.h"

const GeoLayout tails_c1_Skeleton_Main_Happy[] = {
	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 160, 0, 0, 0, 0),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, tails_c1_Head_Switch_001_Head_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout tails_c1_Head_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 161, 0, tails_c1_Head_mesh_layer_1_mat_override_eyes_halfopen_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout tails_c1_Head_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 161, 0, tails_c1_Head_mesh_layer_1_mat_override_eyes_closed_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout tails_c1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 204, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 7209),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 577, 0, tails_c1_Root_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_Chest_skinned_mesh_layer_1),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 131, 0, tails_c1_Chest_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_tails_face),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 161, 0, tails_c1_Head_mesh_layer_1),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, tails_c1_Head_Switch_opt1),
							GEO_BRANCH(1, tails_c1_Head_Switch_opt2),
							GEO_BRANCH(1, tails_c1_Skeleton_Main_Happy),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 101, 128, 0, tails_c1_lArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_lArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 175, 0, 0, tails_c1_lArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 232, 0, 0, tails_c1_lArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -95, 128, 0, tails_c1_rArm_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_rArm_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -180, 0, 0, tails_c1_rArm_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -225, 0, 0, tails_c1_rArm_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 3, 68, -73, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_lTail_001_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 134, 0, -242, tails_c1_lTail_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_lTail_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 158, 0, -272, tails_c1_lTail_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_lTail_003_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 147, 0, -254, tails_c1_lTail_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -2, 68, -73, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_rTail_001_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -132, 0, -236, tails_c1_rTail_001_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_rTail_002_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, -157, 0, -278, tails_c1_rTail_002_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_rTail_003_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -145, 0, -256, tails_c1_rTail_003_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 74, -7, 0, tails_c1_lLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_lLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 1, -147, 0, tails_c1_lLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 4, -216, 0, tails_c1_lLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -73, -7, 0, tails_c1_rLeg_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_rLeg_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 2, -143, 0, tails_c1_rLeg_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 3, -220, 0, tails_c1_rLeg_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, tails_c1_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
