static const s16 warpring_anim_warp_ring_objectAction_values[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 
	0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 
	0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 
	0xF999, 0xF332, 0xECCC, 0xE665, 0xDFFF, 0xD999, 0xD332, 0xCCCC, 0xC666, 
	0xBFFF, 0xB999, 0xB332, 0xACCC, 0xA666, 0x9FFF, 0x9999, 0x9333, 0x8CCC, 
	0x8666, 0x7FFF, 0x7999, 0x7333, 0x6CCC, 0x6666, 0x6000, 0x5999, 0x5333, 
	0x4CCC, 0x4666, 0x4000, 0x3999, 0x3333, 0x2CCD, 0x2666, 0x2000, 0x199A, 
	0x1333, 0x0CCD, 0x0666, 0xFFFF, 0x0000, 
};

static const u16 warpring_anim_warp_ring_objectAction_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0029, 0x0003, 0x0029, 
	0x002C, 0x0001, 0x0055, 
};

static const struct Animation warpring_anim_warp_ring_objectAction = {
	0,
	0,
	0,
	1,
	40,
	ANIMINDEX_NUMPARTS(warpring_anim_warp_ring_objectAction_indices),
	warpring_anim_warp_ring_objectAction_values,
	warpring_anim_warp_ring_objectAction_indices,
	0,
};
