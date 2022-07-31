#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// leveldata
extern Lights1 title_cream64_colors_f3d_lights;
extern u8 title_cream64_titlescreen_ci8_ci8[];
extern u8 title_cream64_titlescreen_ci8_ci8_pal_rgba16[];
extern Vtx title_cream64_title_cream64_mesh_vtx_0[3998];
extern Gfx title_cream64_title_cream64_mesh_tri_0[];
extern Gfx mat_title_cream64_colors_f3d[];
extern Gfx mat_revert_title_cream64_colors_f3d[];
extern Gfx title_cream64_title_cream64_mesh[];

extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];



// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_level_select[];
extern const LevelScript script_intro_file_select[];
extern const LevelScript script_intro_level_select[];
extern const LevelScript script_intro_main_level_entry_stop_music[];
extern const LevelScript script_intro_main_level_entry[];
extern const LevelScript script_intro_splash_screen[];

#endif
