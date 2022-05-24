// cheese_follow.c.inc


void bhv_cheese_follow_init(void) {

    o->oButterflyYPhase = random_float() * 10.0f;
    o->header.gfx.animInfo.animFrame = random_float() * 7.0f;
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;

    cur_obj_scale(0.75f);
}

void bhv_cheese_act_follow_mario(void) {

	float offset = (sinf(((double)gGlobalTimer * 0.1f)) * 20.0f);

	o->oPosY = (o->oPosY * (1.0 - 0.5f)) + ((gMarioState->pos[1] + 100.0f + offset) * 0.5f);

	if (o->oDistanceToMario > 200.0f)
	{
	  o->oMoveAngleYaw = o->oAngleToMario;
	  o->oForwardVel = o->oDistanceToMario/15.0f;

	  o->oDistanceToMario = lateral_dist_between_objects(gMarioObject, o);
	}
	else
	{
		o->oForwardVel *= 0.75f;
	}

	cur_obj_move_xz_using_fvel_and_yaw();
    o->oFaceAngleYaw = o->oAngleToMario;

	switch (gMarioState->currentCostume) {
    case 0: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 1: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 2: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 3: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 4: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 5: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 6: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW_CHOCOLA];
break;
    case 7: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 8: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 9: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 10: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 11: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 12: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 13: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 14: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 15: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 16: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 17: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 18: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    case 19: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW];
break;
    }
	
}

/**if cheese_distance_to_cream > rest_distance { cheese_velocity = cheese_velocity * your_too_slow_boost_value } else if cheese_distance-to_cream < rest_distance { cheese_velocity = -cheese_velocity * woah_nelly_boost_vale } else { cheese_velocity = 0 }
cheese_position += cheese_velocity 

there that should start to work
if you want them to accelerate faster try doing something like 
multiplying cheese_velocity = cheese_velocity*acceleration_amount + ...
you'll have to ask the other guys for how to fill in the values like direction-from_cheese_to_cream or getting cheese_velocity
but stuff like the *_boost_value and acceleration_amount are the values you can play with and set as you like
gotta go, gl hf dd
**/
