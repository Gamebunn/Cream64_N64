#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/cotmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_SKEETER_MM, skeeter_mm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ESPIO, espio_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, cotmc_area_1),
		OBJECT(MODEL_CAP_SWITCH, 14, 372, -6160, 0, 180, 0, 0x00010000, bhvCapSwitch),
		TERRAIN(cotmc_area_1_collision),
		MACRO_OBJECTS(cotmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_NEW_COTMC),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, cotmc_area_2),
		WARP_NODE(0x0A, LEVEL_COTMC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE_GROUNDS, 0x01, 0x14, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHEESE_FOLLOW, -1738, -3917, -2088, 0, 0, 0, 0x00000000, bhvCheeseFollow),
		OBJECT(MODEL_ESPIO, 2507, -2197, -3826, 0, -48, 0, DIALOG_125 << 24, bhvToadMessageEspio),
		OBJECT(MODEL_WISP1, -4089, -4016, -3036, 0, -66, 0, MWISP_COTMC << 16, bhvWisp1),
		OBJECT(MODEL_NONE, -1385, -3825, -1472, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -1385, -4041, -1472, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_SKEETER_MM, -2040, -4094, -2933, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_SKEETER_MM, 49, -4094, -1470, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_SKEETER_MM, 3860, -2318, 750, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_SKEETER_MM, -2220, -4094, -553, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_NONE, 997, -4058, 2216, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -1034, -4058, -4135, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, 5063, -2280, 49, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -997, 3125, -5395, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -1737, -3946, -1838, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -90, -1737, -3946, -1838),
		TERRAIN(cotmc_area_2_collision),
		MACRO_OBJECTS(cotmc_area_2_macro_objs),
		SHOW_DIALOG(/*index*/ 0x00, DIALOG_130),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_NEW_COTMC),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, -1737, -3946, -1838),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
