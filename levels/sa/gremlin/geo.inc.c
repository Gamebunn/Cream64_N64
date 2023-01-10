#include "src/game/envfx_snow.h"

const GeoLayout gremlin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, -201, gremlin_Root_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, gremlin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(LAYER_OPAQUE, 8520),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
