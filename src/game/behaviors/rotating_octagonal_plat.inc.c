// rotating_octagonal_plat.inc.c

static const Collision *sOctagonalPlatformCollision[] = {
    bits_seg7_collision_0701AA84,
    rr_seg7_collision_07029508,
};

static const Collision *sOctagonalPlatformCollisionVC[] = {
    carousel_collision,
};

static s16 sOctagonalPlatformAngularVelocities[] = { 300, -300, 600, -600 };

static s16 sOctagonalPlatformAngularVelocitiesVC[] = { 300, 0, 600, 0 };

void bhv_rotating_octagonal_plat_init(void) {
    o->collisionData = segmented_to_virtual(sOctagonalPlatformCollision[GET_BPARAM2(o->oBehParams)]);
    o->oAngleVelYaw = sOctagonalPlatformAngularVelocities[GET_BPARAM1(o->oBehParams)];
}

void bhv_rotating_octagonal_plat_vc_init(void) {
    o->collisionData = segmented_to_virtual(sOctagonalPlatformCollisionVC[GET_BPARAM2(o->oBehParams)]);
    o->oAngleVelYaw = sOctagonalPlatformAngularVelocitiesVC[GET_BPARAM1(o->oBehParams)];
}

void bhv_rotating_octagonal_plat_loop(void) {
    o->oFaceAngleYaw += o->oAngleVelYaw;
}

void bhv_rotating_octagonal_plat_vc_loop(void) {
    o->oFaceAngleYaw += o->oAngleVelYaw;
    // load_object_collision_model();
}