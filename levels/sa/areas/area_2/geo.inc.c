#include "src/game/envfx_snow.h"

const GeoLayout sa_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1348, 196, 2813, sa_dl_cars_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sa_dl_City_Render_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, sa_dl_City_Render_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sa_dl_City_Render_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sa_dl_City_Render_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1770, 374, 2159, 90, 0, 0, sa_dl_NoCollisionObjects_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, sa_dl_NoCollisionObjects_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 1770, 374, 2159, 90, 0, 0, sa_dl_NoCollisionObjects_001_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, sa_dl_NoCollisionObjects_001_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sa_dl_skybox_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sa_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 40000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, sa_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sa_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, sa_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sa_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
