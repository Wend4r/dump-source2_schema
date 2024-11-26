#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 66
// Alignment: 4
// Size: 0x4
enum class EAbilityBehavior_t : uint32_t
{
	CITADEL_ABILITY_BEHAVIOR_HIDDEN = 0x0,
	CITADEL_ABILITY_BEHAVIOR_DONT_BREAK_INVISIBILITY = 0x1,
	CITADEL_ABILITY_BEHAVIOR_IS_PRIMARY_WEAPON = 0x2,
	CITADEL_ABILITY_BEHAVIOR_SILENT_CAST_FAILURE_FEEDBACK = 0x3,
	CITADEL_ABILITY_BEHAVIOR_DONT_INTERRUPT_SPRINT = 0x4,
	CITADEL_ABILITY_BEHAVIOR_CAST_EVEN_IF_BUSY_AND_EXCLUSIVE = 0x5,
	CITADEL_ABILITY_BEHAVIOR_CHANNELLED = 0x6,
	CITADEL_ABILITY_BEHAVIOR_EXCLUSIVE_USE = 0x7,
	CITADEL_ABILITY_BEHAVIOR_PROJECTILE = 0x8,
	CITADEL_ABILITY_BEHAVIOR_WEAPON_TOGGLE = 0x9,
	CITADEL_ABILITY_BEHAVIOR_INPUT_DIRECTIONAL_2D = 0xa,
	CITADEL_ABILITY_BEHAVIOR_INPUT_DIRECTIONAL_3D = 0xb,
	CITADEL_ABILITY_BEHAVIOR_ALWAYS_PREVIEW_RADIUS = 0xc,
	CITADEL_ABILITY_BEHAVIOR_DONT_SWITCH_AWAY_ON_CAST = 0xd,
	CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_BUSY = 0xe,
	CITADEL_ABILITY_BEHAVIOR_INTERRUPT_MELEE_ON_CAST = 0xf,
	CITADEL_ABILITY_BEHAVIOR_START_COOLDOWN_ON_TOGGLE_OFF = 0x10,
	CITADEL_ABILITY_BEHAVIOR_DISARMABLE = 0x11,
	CITADEL_ABILITY_BEHAVIOR_NOT_SILENCABLE = 0x12,
	CITADEL_ABILITY_BEHAVIOR_DEPLOY_OBJECT = 0x13,
	CITADEL_ABILITY_BEHAVIOR_NO_TARGET = 0x14,
	CITADEL_ABILITY_BEHAVIOR_DAMAGE_DOESNT_WAKE_FROM_SLEEP = 0x15,
	CITADEL_ABILITY_BEHAVIOR_UNSELLABLE = 0x16,
	CITADEL_ABILITY_BEHAVIOR_PURCHASABLE_MULTIPLE_TIMES = 0x17,
	CITADEL_ABILITY_BEHAVIOR_DONT_TRIGGER_SPELL_BLOCK = 0x18,
	CITADEL_ABILITY_BEHAVIOR_CANCEL_ON_ATTACK = 0x19,
	CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_CMD_RESTRICTED = 0x1a,
	CITADEL_ABILITY_BEHAVIOR_DISPLAYS_DAMAGE_IMPACT = 0x1b,
	CITADEL_ABILITY_BEHAVIOR_PROJECTILE_PASS_THROUGH_WORLD = 0x1c,
	CITADEL_ABILITY_BEHAVIOR_NON_COMBAT = 0x1d,
	CITADEL_ABILITY_BEHAVIOR_EQUAL_UNIT_TARGET_PRIORITY = 0x1e,
	CITADEL_ABILITY_BEHAVIOR_DONT_AIM_FACING_ENEMY = 0x1f,
	CITADEL_ABILITY_BEHAVIOR_TARGET_THROUGH_WALLS = 0x20,
	CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_HIDDEN = 0x21,
	CITADEL_ABILITY_BEHAVIOR_ALLOW_SELF_CAST = 0x22,
	CITADEL_ABILITY_BEHAVIOR_CLEAVE_DISABLED = 0x23,
	CITADEL_ABILITY_BEHAVIOR_DISPLAYS_DAMAGE_SOURCE_IMPACT = 0x24,
	CITADEL_ABILITY_BEHAVIOR_PREVENT_BOT_USAGE = 0x25,
	CITADEL_ABILITY_BEHAVIOR_REQUIRE_PREDICTION = 0x26,
	CITADEL_ABILITY_BEHAVIOR_COOLDOWN_PERSISTS_ACROSS_REBUY = 0x27,
	CITADEL_ABILITY_BEHAVIOR_COOLDOWN_REFILLS_ALL_CHARGES = 0x28,
	CITADEL_ABILITY_BEHAVIOR_SHOW_CAST_RANGE_AS_SAT_SPHERE_WHILE_CASTING = 0x29,
	CITADEL_ABILITY_BEHAVIOR_IGNORE_SELECTION_MASH_PROTECTION = 0x2a,
	CITADEL_ABILITY_BEHAVIOR_PREVENT_TRAINING_BOT_USAGE = 0x2b,
	CITADEL_ABILITY_BEHAVIOR_CAN_CANCEL_DURING_CAST_DELAY = 0x2c,
	CITADEL_ABILITY_BEHAVIOR_CANNOT_CANCEL_DURING_CHANNEL = 0x2d,
	CITADEL_ABILITY_BEHAVIOR_CAN_CAST_ON_ZIPLINE = 0x2e,
	CITADEL_ABILITY_BEHAVIOR_STARTS_ON_COOLDOWN = 0x2f,
	CITADEL_ABILITY_BEHAVIOR_CAN_HEAL_PLAYERS = 0x30,
	CITADEL_ABILITY_BEHAVIOR_SWITCH_AWAY_ON_FAILED_CAST = 0x31,
	CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_DODGING = 0x32,
	CITADEL_ABILITY_BEHAVIOR_TRIGGER = 0x33,
	CITADEL_ABILITY_BEHAVIOR_IS_ALTERNATIVE_WEAPON = 0x34,
	CITADEL_ABILITY_BEHAVIOR_PROJECTILE_FIRED_AS_BULLET = 0x35,
	CITADEL_ABILITY_BEHAVIOR_COOLDOWN_ON_CHANNEL_END = 0x36,
	CITADEL_ABILITY_BEHAVIOR_DONT_CONSUME_ABILITY_RESOURCE_ON_CAST = 0x37,
	CITADEL_ABILITY_BEHAVIOR_ALLOW_ALT_CAST = 0x38,
	CITADEL_ABILITY_BEHAVIOR_DONT_TRIGGER_POST_CAST_ON_CAST_COMPLETE = 0x39,
	CITADEL_ABILITY_BEHAVIOR_USE_INSTANT_CAST_UNIT_TARGET_UI = 0x3a,
	CITADEL_ABILITY_BEHAVIOR_MOVEMENT = 0x3b,
	CITADEL_ABILITY_BEHAVIOR_TRIGGER_CANCEL_MASH_PROTECTION_ON_CAST = 0x3c,
	CITADEL_ABILITY_BEHAVIOR_REQUIRE_ABILITY_BUTTON_TO_CANCEL = 0x3d,
	CITADEL_ABILITY_BEHAVIOR_CAN_SET_QUICK_CAST = 0x3e,
	CITADEL_ABILITY_BEHAVIOR_DONT_INTERRUPT_SLIDE_ON_CAST = 0x3f,
	CITADEL_ABILITY_BEHAVIOR_CAST_RANGE_IS_2D = 0x40,
	// MPropertySuppressEnumerator
	CITADEL_ABILITY_BEHAVIOR_COUNT = 0x41,
};

