#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 147
// Alignment: 4
// Size: 0x4
enum class EModifierState : uint32_t
{
	MODIFIER_STATE_MATERIAL_OVERRIDE = 0x0,
	MODIFIER_STATE_ORIENTED_GRAVITY = 0x1,
	MODIFIER_STATE_UNRESTRICTED_MOVEMENT = 0x2,
	MODIFIER_STATE_IMMOBILIZED = 0x3,
	MODIFIER_STATE_DISARMED = 0x4,
	MODIFIER_STATE_MUTED = 0x5,
	MODIFIER_STATE_SILENCED = 0x6,
	MODIFIER_STATE_SILENCE_MOVEMENT_ABILITES = 0x7,
	MODIFIER_STATE_STUNNED = 0x8,
	MODIFIER_STATE_INVULNERABLE = 0x9,
	MODIFIER_STATE_TECH_INVULNERABLE = 0xa,
	MODIFIER_STATE_TECH_DAMAGE_INVULNERABLE = 0xb,
	MODIFIER_STATE_TECH_UNTARGETABLE_BY_ENEMIES = 0xc,
	MODIFIER_STATE_STATUS_IMMUNE = 0xd,
	MODIFIER_STATE_UNSTOPPABLE = 0xe,
	MODIFIER_STATE_OUT_OF_GAME = 0xf,
	MODIFIER_STATE_COMMAND_RESTRICTED = 0x10,
	MODIFIER_STATE_CHARGING = 0x11,
	MODIFIER_STATE_OBSCURED = 0x12,
	MODIFIER_STATE_INVISIBLE_TO_ENEMY = 0x13,
	MODIFIER_STATE_IGNORED_BY_NPC_TARGETING = 0x14,
	MODIFIER_STATE_NPC_TARGETABLE_WHILE_INVULNERABLE = 0x15,
	MODIFIER_STATE_SPRINTING = 0x16,
	MODIFIER_STATE_UNKILLABLE = 0x17,
	MODIFIER_STATE_GROUND_DASHING = 0x18,
	MODIFIER_STATE_ADDITIONAL_AIR_MOVES = 0x19,
	MODIFIER_STATE_AIR_DASHING = 0x1a,
	MODIFIER_STATE_MOVEMENT_ABILITY_RESTRICTED = 0x1b,
	MODIFIER_STATE_SPRINT_NO_INTERRUPT = 0x1c,
	MODIFIER_STATE_SPRINT_DISABLED = 0x1d,
	MODIFIER_STATE_IN_SHOP = 0x1e,
	MODIFIER_STATE_IN_FOUNTAIN = 0x1f,
	MODIFIER_STATE_IN_ENEMY_BASE = 0x20,
	MODIFIER_STATE_IN_FRIENDLY_BASE = 0x21,
	MODIFIER_STATE_IN_MID_BOSS_TEMPLE = 0x22,
	MODIFIER_STATE_DASH_DISABLED = 0x23,
	MODIFIER_STATE_DASH_DISABLED_DEBUFF = 0x24,
	MODIFIER_STATE_BURNING = 0x25,
	MODIFIER_STATE_HEALTH_REGEN_DISABLED = 0x26,
	MODIFIER_STATE_HEALING_DISABLED = 0x27,
	MODIFIER_STATE_DAMAGE_MOVEMENT_PENALTY_IMMUNE = 0x28,
	MODIFIER_STATE_BUSY_WITH_ACTION = 0x29,
	MODIFIER_STATE_SLOWED = 0x2a,
	MODIFIER_STATE_SHOOTING_DISABLED = 0x2b,
	MODIFIER_STATE_SHOOTING_FORCED_ON = 0x2c,
	MODIFIER_STATE_MELEE_ATTACKS_ONLY = 0x2d,
	MODIFIER_STATE_SLIDING = 0x2e,
	MODIFIER_STATE_VISIBLE_TO_ENEMY = 0x2f,
	MODIFIER_STATE_INFINITE_CLIP = 0x30,
	MODIFIER_STATE_KNOCKDOWN_IMMUNE = 0x31,
	MODIFIER_STATE_JUMP_DISABLED = 0x32,
	MODIFIER_STATE_DUCKING_DISABLED = 0x33,
	MODIFIER_STATE_DUCKING_FORCED = 0x34,
	MODIFIER_STATE_AIR_DUCKING_FORCED = 0x35,
	MODIFIER_STATE_IS_ASLEEP = 0x36,
	MODIFIER_STATE_GLOW_THROUGH_WALLS_TO_ENEMY = 0x37,
	MODIFIER_STATE_GLOW_THROUGH_WALLS_TO_PROVIDER = 0x38,
	MODIFIER_STATE_GLOW_THROUGH_WALLS_TO_PROVIDER_TEAMMATES_WITHIN_RANGE = 0x39,
	MODIFIER_STATE_GLOW_TO_PROVIDER = 0x3a,
	MODIFIER_STATE_GLOW_IN_LOS_TO_ENEMY = 0x3b,
	MODIFIER_STATE_DISABLE_AIR_SPREAD_PENALTY = 0x3c,
	MODIFIER_STATE_ZIPLINE_MASTERY = 0x3d,
	MODIFIER_STATE_USING_ZIPLINE = 0x3e,
	MODIFIER_STATE_IN_ALTERNATE_DIMENSION = 0x3f,
	MODIFIER_STATE_ANIMGRAPH_CONTROLLED_MOVEMENT = 0x40,
	MODIFIER_STATE_COMBAT_ABILITIES_DISABLED = 0x41,
	MODIFIER_STATE_CHAINED = 0x42,
	MODIFIER_STATE_ALL_ARMOR_DISABLED = 0x43,
	MODIFIER_STATE_BULLET_INVULNERABLE = 0x44,
	MODIFIER_STATE_BREAK_ICE_PATH = 0x45,
	MODIFIER_STATE_REFLECT_ATTACKS = 0x46,
	MODIFIER_STATE_MANTLE_DISABLED = 0x47,
	MODIFIER_STATE_AI_FORCE_AGGRO = 0x48,
	MODIFIER_STATE_AI_FORCE_CALM = 0x49,
	MODIFIER_STATE_DRONE_ATTACHED = 0x4a,
	MODIFIER_STATE_AIM_FORWARD = 0x4b,
	MODIFIER_STATE_AIM_FORWARD_WITH_PITCH = 0x4c,
	MODIFIER_STATE_ZIPLINE_DISABLED = 0x4d,
	MODIFIER_STATE_ZIPLINE_INTRO = 0x4e,
	MODIFIER_STATE_RESPAWN_CREDIT = 0x4f,
	MODIFIER_STATE_DISPLAY_LIFETIME = 0x50,
	MODIFIER_STATE_MELEE_DISABLED = 0x51,
	MODIFIER_STATE_MELEE_DISABLED_DEBUFF = 0x52,
	MODIFIER_STATE_GLITCHED = 0x53,
	MODIFIER_STATE_SLIDING_DISABLED = 0x54,
	MODIFIER_STATE_RELOAD_DISABLED = 0x55,
	MODIFIER_STATE_RELOAD_MELEE_FULL_SPEED = 0x56,
	MODIFIER_STATE_MANUAL_RELOAD_DISABLED = 0x57,
	MODIFIER_STATE_UNIT_STATUS_HEALTH_HIDDEN = 0x58,
	MODIFIER_STATE_UNIT_STATUS_HIDDEN = 0x59,
	MODIFIER_STATE_FADE_ALPHA_TO_ZERO = 0x5a,
	MODIFIER_STATE_FRIENDLY_FIRE_ENABLED = 0x5b,
	MODIFIER_STATE_FLYING = 0x5c,
	MODIFIER_STATE_SCOPED = 0x5d,
	MODIFIER_STATE_ROLLING_BALL = 0x5e,
	MODIFIER_STATE_SLOW_IMMUNE = 0x5f,
	MODIFIER_STATE_ROOT_IMMUNE = 0x60,
	MODIFIER_STATE_IS_MELEE_TARGET = 0x61,
	MODIFIER_STATE_GLOW_TO_ALLIES_AS_ENEMY = 0x62,
	MODIFIER_STATE_LADDER_DISABLE = 0x63,
	MODIFIER_STATE_IGNORE_BULLETS = 0x64,
	MODIFIER_STATE_IGNORE_MELEE = 0x65,
	MODIFIER_STATE_HIDE_CROSSHAIR = 0x66,
	MODIFIER_STATE_HIDE_STAMINA = 0x67,
	MODIFIER_STATE_HIDE_AMMO = 0x68,
	MODIFIER_STATE_APPLY_VERTICAL_DRAG = 0x69,
	MODIFIER_STATE_FALSE_DEATH = 0x6a,
	MODIFIER_STATE_NO_WINDUP = 0x6b,
	MODIFIER_STATE_TITAN_LASER_VALID_TARGET = 0x6c,
	MODIFIER_STATE_HAS_HOLLOW_POINT_BULLETS = 0x6d,
	MODIFIER_STATE_SUPPRESS_AIR_DRAG = 0x6e,
	MODIFIER_STATE_GROUND_DASH_EARLY_OUT_WINDOW = 0x6f,
	MODIFIER_STATE_ICEBEAMING = 0x70,
	MODIFIER_STATE_IN_ALLY_SMOKE = 0x71,
	MODIFIER_STATE_IN_ENEMY_SMOKE = 0x72,
	MODIFIER_STATE_NIKUMAN_ACTIVE = 0x73,
	MODIFIER_STATE_NO_OUTGOING_DAMAGE = 0x74,
	MODIFIER_STATE_NO_INCOMING_DAMAGE = 0x75,
	MODIFIER_STATE_CHRONO_SWAPPING = 0x76,
	MODIFIER_STATE_BOUNCE_PAD_STOMPING = 0x77,
	MODIFIER_STATE_FLYING_BEETLE_TARGET = 0x78,
	MODIFIER_STATE_DREAMWEAVER_SLEEP = 0x79,
	MODIFIER_STATE_HOLDING_IDOL = 0x7a,
	MODIFIER_STATE_RETURN_IDOL_AREA = 0x7b,
	MODIFIER_STATE_RETURNING_IDOL = 0x7c,
	MODIFIER_STATE_GALVANIC_STORM_BUFF = 0x7d,
	MODIFIER_STATE_IN_ABILITY_ALLOW_ZOOM = 0x7e,
	MODIFIER_STATE_IN_ABILITY_DISABLE_ZOOM = 0x7f,
	MODIFIER_STATE_STAMINA_REGEN_PAUSED = 0x80,
	MODIFIER_STATE_PREMATCH = 0x81,
	MODIFIER_STATE_SELF_DESTRUCT = 0x82,
	MODIFIER_STATE_COOP_TETHER_ACTIVE = 0x83,
	MODIFIER_STATE_COOP_TETHER_LOCKED_TARGET = 0x84,
	MODIFIER_STATE_LOCKED_AIM_ANGLES = 0x85,
	MODIFIER_STATE_ICEPATHING = 0x86,
	MODIFIER_STATE_BACKDOOR_PROTECTED = 0x87,
	MODIFIER_STATE_IN_COMBAT = 0x88,
	MODIFIER_STATE_DASHJUMP_STAMINA_FREE = 0x89,
	MODIFIER_STATE_YAMATO_SHADOW_FORM = 0x8a,
	MODIFIER_STATE_IN_MID_BOSS_PIT = 0x8b,
	MODIFIER_STATE_CASTS_IGNORE_CHANNELING = 0x8c,
	MODIFIER_STATE_CAN_ACTIVE_RELOAD = 0x8d,
	MODIFIER_STATE_DIGGER_BURROW_CHANNEL = 0x8e,
	MODIFIER_STATE_DIGGER_SPIN = 0x8f,
	MODIFIER_STATE_NEAR_REJUVINATOR = 0x90,
	// MPropertySuppressEnumerator
	MODIFIER_STATE_COUNT = 0x91,
	// MPropertySuppressEnumerator
	MODIFIER_STATE_INVALID = 0xff,
};

