#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 71
// Alignment: 4
// Size: 0x4
enum class EModifierEvent : uint32_t
{
	MODIFIER_EVENT_PRE_DAMAGE_TAKEN_BROADCAST = 0x0,
	MODIFIER_EVENT_DAMAGE_TAKEN_BROADCAST = 0x1,
	MODIFIER_EVENT_HEALTH_TAKEN_BROADCAST = 0x2,
	MODIFIER_EVENT_PLAYER_KILLED_BROADCAST = 0x3,
	MODIFIER_EVENT_NPC_KILLED_BROADCAST = 0x4,
	MODIFIER_EVENT_TELEPORT_USED_BROADCAST = 0x5,
	MODIFIER_EVENT_ABILITY_GAINED_BROADCAST = 0x6,
	MODIFIER_EVENT_TIME_SCALE_CHANGED_BROADCAST = 0x7,
	MODIFIER_EVENT_UNIT_SHIELD_ABSORBED_DAMAGE_BROADCAST = 0x8,
	MODIFIER_EVENT_ABILITY_EXECUTED_BROADCAST = 0x9,
	MODIFIER_EVENT_BROADCAST_EVENT_COUNT = 0xa,
	MODIFIER_EVENT_MODIFIER_GAINED = 0xa,
	MODIFIER_EVENT_MODIFIER_LOST = 0xb,
	MODIFIER_EVENT_SCRIPTED_EVENT = 0xc,
	MODIFIER_EVENT_PRE_DAMAGE_TAKEN = 0xd,
	MODIFIER_EVENT_DAMAGE_TAKEN = 0xe,
	MODIFIER_EVENT_HEALTH_TAKEN = 0xf,
	MODIFIER_EVENT_PARENT_ACTIVATED = 0x10,
	MODIFIER_EVENT_MODEL_CHANGED = 0x11,
	MODIFIER_EVENT_START_TOUCH = 0x12,
	MODIFIER_EVENT_ABILITY_CAST_STARTED = 0x13,
	MODIFIER_EVENT_ABILITY_EXECUTED = 0x14,
	MODIFIER_EVENT_ABILITY_SELECTED = 0x15,
	MODIFIER_EVENT_ABILITY_ADDED = 0x16,
	MODIFIER_EVENT_ITEM_REMOVED = 0x17,
	MODIFIER_EVENT_GUN_FIRED = 0x18,
	MODIFIER_EVENT_BULLET_CREATED = 0x19,
	MODIFIER_EVENT_BULLET_HIT = 0x1a,
	MODIFIER_EVENT_ABILITY_AS_BULLET_HIT = 0x1b,
	MODIFIER_EVENT_FIRED_LAST_SHOT_IN_CLIP = 0x1c,
	MODIFIER_EVENT_ON_CANCEL_ABILITY_BUTTON_PRESSED = 0x1d,
	MODIFIER_EVENT_ON_PRE_ABILITY_CHANNEL_STARTED = 0x1e,
	MODIFIER_EVENT_ON_ABILITY_CHANNEL_FINISHED = 0x1f,
	MODIFIER_EVENT_PLAYER_KILLED = 0x20,
	MODIFIER_EVENT_NPC_KILLED = 0x21,
	MODIFIER_EVENT_LANDED_ON_GROUND = 0x22,
	MODIFIER_EVENT_ATTACHED_TO_ZIPLINE = 0x23,
	MODIFIER_EVENT_FIRED_LAST_SHOT_IN_BURST = 0x24,
	MODIFIER_EVENT_BULLET_REMOVED = 0x25,
	MODIFIER_EVENT_ATTACK_REFLECTED = 0x26,
	MODIFIER_EVENT_PLAYER_GROUND_DASH_STARTED = 0x27,
	MODIFIER_EVENT_PLAYER_GROUND_DASH_FINISHED = 0x28,
	MODIFIER_EVENT_PLAYER_RELOAD_STARTED = 0x29,
	MODIFIER_EVENT_PLAYER_RELOAD_FINISHED = 0x2a,
	MODIFIER_EVENT_UNIT_HEALED = 0x2b,
	MODIFIER_EVENT_PRE_OWNER_TAKE_ADJUSTED_DAMAGE = 0x2c,
	MODIFIER_EVENT_UNIT_SHIELD_REMOVED = 0x2d,
	MODIFIER_EVENT_UNIT_SHIELD_ABSORBED_DAMAGE = 0x2e,
	MODIFIER_EVENT_PLAYER_PURCHASED_ITEM = 0x2f,
	MODIFIER_EVENT_ADD_ABILITY_BONUS = 0x30,
	MODIFIER_EVENT_ABILITY_INTERRUPTED = 0x31,
	MODIFIER_EVENT_PLAYER_ENTERED_FOUNTAIN = 0x32,
	MODIFIER_EVENT_BOUNCE_PAD_ACTIVATED = 0x33,
	MODIFIER_EVENT_PLAYER_RESPAWNED = 0x34,
	MODIFIER_EVENT_DASH_JUMP_EXECUTED = 0x35,
	MODIFIER_EVENT_AIR_JUMP_EXECUTED = 0x36,
	MODIFIER_EVENT_CHECK_FOR_PARRY = 0x37,
	MODIFIER_EVENT_HERO_LEVEL_CHANGED = 0x38,
	MODIFIER_EVENT_PRE_FATAL_DAMAGE = 0x39,
	MODIFIER_EVENT_OVERRIDE_SHOT_PARAMS = 0x3a,
	MODIFIER_EVENT_ABILITY_TRIGGER_ACTIVATED = 0x3b,
	MODIFIER_EVENT_VISCOUS_CUBE_DESTROYED = 0x3c,
	MODIFIER_EVENT_ABILITY_DASHCAST_HIT = 0x3d,
	MODIFIER_EVENT_ABILITY_DASHCAST_MISS = 0x3e,
	MODIFIER_EVENT_PRE_BULLET_FIRED = 0x3f,
	MODIFIER_EVENT_BULLET_EVADED = 0x40,
	MODIFIER_EVENT_MELEE_ATTACK = 0x41,
	MODIFIER_EVENT_PLAYER_MOVE_COLLIDE = 0x42,
	MODIFIER_EVENT_ORB_CLAIMED = 0x43,
	// MPropertySuppressEnumerator
	MODIFIER_EVENT_COUNT = 0x44,
	// MPropertySuppressEnumerator
	MODIFIER_EVENT_INVALID = 0xff,
};

