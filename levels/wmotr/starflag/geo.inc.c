#include "src/game/envfx_snow.h"

const GeoLayout starflag_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, starflag_000_offset_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 2040, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_ALPHA, starflag_000_offset_004_skinned_mesh_layer_4),
								GEO_ANIMATED_PART(LAYER_ALPHA, 460, 0, 0, starflag_000_offset_004_mesh_layer_4),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_ALPHA, starflag_000_offset_005_skinned_mesh_layer_4),
									GEO_ANIMATED_PART(LAYER_ALPHA, 460, 0, 0, starflag_000_offset_005_mesh_layer_4),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_ALPHA, starflag_000_offset_006_skinned_mesh_layer_4),
										GEO_ANIMATED_PART(LAYER_ALPHA, 344, 0, 0, starflag_000_offset_006_mesh_layer_4),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_ALPHA, starflag_000_offset_007_skinned_mesh_layer_4),
											GEO_ANIMATED_PART(LAYER_ALPHA, 288, 0, 0, starflag_000_offset_007_mesh_layer_4),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, starflag_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, starflag_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
