#include "Self.hpp"

using namespace Big;

void SelfFeatures::GodMode() {
	if(g_Settings.self_god_mode) {
		PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	else {
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
}

void SelfFeatures::SetHealth() {
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), g_Settings.self_set_health);
}

void SelfFeatures::SetMaxHealth() {
	ENTITY::SET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), g_Settings.self_set_max_health);
}

void SelfFeatures::SetHealthRegenX() {
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_PED_ID(), g_Settings.self_set_health_regen_x);
}

void SelfFeatures::CopsNeverWanted() {
	if (g_Settings.self_never_wanted) {
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	}
	else {
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
}

void SelfFeatures::CopsBlindEye() {
	if (g_Settings.self_cops_blind_eye) {
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_PED_ID(), true);
	}
	else {
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_PED_ID(), false);
	}
}

void SelfFeatures::GangsBlindEye() {
	if (g_Settings.self_gangs_blind_eye) {
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_PED_ID(), false);
	}
	else {
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_PED_ID(), true);
	}
}

void SelfFeatures::IgnorePlayer() {
	if (g_Settings.self_ignore_player) {
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_PED_ID(), true);
	}
	else {
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_PED_ID(), false);
	}
}

void SelfFeatures::IngoreShockingEvents() {
	if (g_Settings.self_ignore_shocking_events) {
		PLAYER::SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(PLAYER::PLAYER_PED_ID(), true);
	}
	else {
		PLAYER::SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(PLAYER::PLAYER_PED_ID(), false);
	}
}

void SelfFeatures::MaxSpeed() {
	if (g_Settings.self_max_run_speed) {
		float maxrun{ 1.49 };
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_PED_ID(), maxrun);
	}
	else {
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
	}
}

void SelfFeatures::MaxSwim() {
	if (g_Settings.self_max_swim_speed) {
		float maxswim{ 1.49 };
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_PED_ID(), maxswim);
	}
	else {
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
	}
}

void SelfFeatures::RunSpeedX() {
	PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_PED_ID(), g_Settings.self_run_speed_x);
}

void SelfFeatures::SwimSpeedX() {
	PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_PED_ID(), g_Settings.self_swim_speed_x);
}

void SelfFeatures::SuperJump() {
	if (g_Settings.self_super_jump) {
		if (IsKeyPressed(VK_SPACE))
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_PED_ID());
	}
}

void SelfFeatures::Invisible() {
	if (g_Settings.self_invisible) {
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	else {
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
	}
}


