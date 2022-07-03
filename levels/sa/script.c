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

#include "actors/group4.h"
#include "actors/group13.h"
#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/sa/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1000, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFishSpawner),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1000, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFishSpawner),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -4250, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_sa_entry[] = {
    INIT_LEVEL(),
    LOAD_YAY0(        /*seg*/ 0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd),
    LOAD_YAY0_TEXTURE(/*seg*/ 0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd),
    LOAD_YAY0(        /*seg*/ 0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd),
    LOAD_YAY0(        /*seg*/ 0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd),
    //LOAD_YAY0(        /*seg*/ 0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd),
    //LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_YAY0(        /*seg*/ 0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    //JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),

    LOAD_MODEL_FROM_GEO(MODEL_GARDEVOIR, gardevoir_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TAILS_C1, tails_c1_geo),
    LOAD_MODEL_FROM_GEO(MODEL_POCKY, pocky_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TREE_MS, ms_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SORBET, sorbet_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TAMMIE, tammie_geo),

    AREA(/*index*/ 1, sa_geo_000170),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1535, 0, /*angle*/ 0, 90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSwimmingWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_SA, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x27, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x28, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        TERRAIN(/*terrainData*/ sa_seg7_collision),
        MACRO_OBJECTS(/*objList*/ sa_seg7_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ (SEQ_LEVEL_WATER | SEQ_VARIATION)),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

	AREA(2, sa_area_2),
		WARP_NODE(0x0A, LEVEL_SA, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x27, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x28, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_GARDEVOIR, -5761, 131, 2180, 0, 0, 0, MS_002 << 16, bhvBobombBuddyGardevoir),
		OBJECT(MODEL_POCKY, 3056, 131, 1412, 0, 25, 0, MS_003 << 24, bhvToadMessagePocky),
		OBJECT(MODEL_SORBET, 2559, 366, 1207, 0, 0, 0, MS_005 << 24, bhvToadMessageSorbet),
		OBJECT(MODEL_TAILS_C1, 1678, 131, 2374, 0, 90, 0, MS_004 << 24, bhvToadMessageTails1),
		OBJECT(MODEL_TAMMIE, 4471, 1789, -546, 0, 0, 0, MS_006 << 16, bhvTammie),
        OBJECT(MODEL_WISP1, 5260, 131, 4853, 0, 0, 0, MWISP_MS << 16, bhvWisp1),
		OBJECT(MODEL_CHEESE_FOLLOW, 6830, 131, 5783, 0, -90, 0, 0x00000000, bhvCheeseFollow),
		OBJECT(MODEL_NONE, 3194, 432, 2042, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 3194, 214, 2042, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_WOODEN_SIGNPOST, -4733, 228, -5763, 0, 0, 0, MS_001 << 16, bhvMessagePanel),
		OBJECT(MODEL_NONE, -96, 130, -1293, 0, 0, 0, MS_007 << 16, bhvSignOnWall),
		OBJECT(MODEL_NONE, -434, 130, -1293, 0, 0, 0, MS_007 << 16, bhvSignOnWall),
		OBJECT(MODEL_WOODEN_SIGNPOST, 5880, 131, 4184, 0, 0, 0, MS_008 << 16, bhvMessagePanel),
		OBJECT(MODEL_NONE, 4533, 1808, -562, 0, 90, 0, MS_006 << 16, bhvSignOnWall),
		OBJECT(MODEL_TREE_MS, 951, 131, 2657, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, -2062, 131, 4112, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, -5496, 131, 3837, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, -5495, 131, -3209, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, -186, 131, -3917, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, 2641, 131, -2501, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, 3774, 131, -1010, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, 5211, 131, 1493, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, 6681, 131, 4663, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, 5926, 131, 5790, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, -4020, 131, 5286, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_TREE_MS, -4047, 131, -1, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 6622, 200, 5568, 0, -135, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -135, 6622, 200, 5568),
		TERRAIN(sa_area_2_collision),
		MACRO_OBJECTS(sa_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_MISSION_STREET),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ 0, -1535, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
