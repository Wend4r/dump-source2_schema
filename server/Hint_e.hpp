#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 85
// Alignment: 4
// Size: 0x4
enum class Hint_e : uint32_t
{
	HINT_ANY = 0xffffffffffffffff,
	HINT_NONE = 0x0,
	HINT_NOT_USED_WORLD_DOOR = 0x1,
	HINT_WORLD_WINDOW = 0x2,
	HINT_NOT_USED_WORLD_BUTTON = 0x3,
	HINT_NOT_USED_WORLD_MACHINERY = 0x4,
	HINT_NOT_USED_WORLD_LEDGE = 0x5,
	HINT_NOT_USED_WORLD_LIGHT_SOURCE = 0x6,
	HINT_NOT_USED_WORLD_HEAT_SOURCE = 0x7,
	HINT_NOT_USED_WORLD_BLINKING_LIGHT = 0x8,
	HINT_NOT_USED_WORLD_BRIGHT_COLORS = 0x9,
	HINT_NOT_USED_WORLD_HUMAN_BLOOD = 0xa,
	HINT_NOT_USED_WORLD_ALIEN_BLOOD = 0xb,
	HINT_WORLD_WORK_POSITION = 0xc,
	HINT_WORLD_VISUALLY_INTERESTING = 0xd,
	HINT_WORLD_VISUALLY_INTERESTING_DONT_AIM = 0xe,
	HINT_WORLD_INHIBIT_COMBINE_MINES = 0xf,
	HINT_WORLD_VISUALLY_INTERESTING_STEALTH = 0x10,
	HINT_GENERIC = 0x11,
	HINT_TACTICAL_COVER_MED_DEPRECATED = 0x64,
	HINT_TACTICAL_COVER_CENTER = 0x65,
	HINT_TACTICAL_HIDE = 0x66,
	HINT_TACTICAL_PINCH = 0x67,
	HINT_TACTICAL_SENTRY = 0x68,
	HINT_TACTICAL_ENEMY_DISADVANTAGED = 0x69,
	HINT_NOT_USED_HEALTH_KIT = 0x6a,
	HINT_TACTICAL_HIGH_GROUND = 0x6b,
	HINT_TACTICAL_COVER_LEFT = 0x6c,
	HINT_TACTICAL_COVER_RIGHT = 0x6d,
	HINT_TACTICAL_COVER_NARROW = 0x6e,
	HINT_TACTICAL_CREATE_COVER = 0x6f,
	HINT_NOT_USED_URBAN_STREETCORNER = 0xc8,
	HINT_NOT_USED_URBAN_STREETLAMP = 0xc9,
	HINT_NOT_USED_URBAN_DARK_SPOT = 0xca,
	HINT_NOT_USED_URBAN_POSTER = 0xcb,
	HINT_NOT_USED_URBAN_SHELTER = 0xcc,
	HINT_NOT_USED_ASSASSIN_SECLUDED = 0x12c,
	HINT_NOT_USED_ASSASSIN_RAFTERS = 0x12d,
	HINT_NOT_USED_ASSASSIN_GROUND = 0x12e,
	HINT_NOT_USED_ASSASSIN_MONKEYBARS = 0x12f,
	HINT_ANTLION_BURROW_POINT = 0x190,
	HINT_ANTLION_THUMPER_FLEE_POINT = 0x191,
	HINT_HEADCRAB_BURROW_POINT = 0x1c2,
	HINT_HEADCRAB_EXIT_POD_POINT = 0x1c3,
	HINT_NOT_USED_ROLLER_PATROL_POINT = 0x1f4,
	HINT_NOT_USED_ROLLER_CLEANUP_POINT = 0x1f5,
	HINT_NOT_USED_PSTORM_ROCK_SPAWN = 0x258,
	HINT_CROW_FLYTO_POINT = 0x2bc,
	HINT_BUG_PATROL_POINT = 0x320,
	HINT_FOLLOW_WAIT_POINT = 0x384,
	HINT_JUMP_OVERRIDE = 0x385,
	HINT_PLAYER_SQUAD_TRANSITON_POINT = 0x386,
	HINT_NPC_EXIT_POINT = 0x387,
	HINT_STRIDER_NODE = 0x388,
	HINT_PLAYER_ALLY_MOVE_AWAY_DEST = 0x3b6,
	HINT_PLAYER_ALLY_FEAR_DEST = 0x3b7,
	HINT_CSTRIKE_HOSTAGE_ESCAPE = 0x44c,
	HINT_COMBINE_FALLBACK = 0x578,
	HINT_COMBINE_SIGNAL = 0x579,
	HINT_COMBINE_CHARGER_SHIELD = 0x57a,
	HINT_COMBINE_SNIPING_POSITION = 0x57b,
	HINT_AGENT_WORK = 0x5dc,
	HINT_INSTIGATOR_LURK = 0x640,
	HINT_FERAL_MANHACK_DRAG_TOWARDS = 0x641,
	HINT_KOOSH_CHILD_WATER_SOURCE = 0x642,
	HINT_FLYGUY_JUMP = 0x6a4,
	HINT_HOLDOUT_DEFENSIVE_POSITION = 0x708,
	HINT_HOLDOUT_POWER_CONSUMER = 0x709,
	HINT_FOUNDRY_COMMS = 0x76c,
	HINT_FOUNDRY_WELD = 0x76d,
	HINT_PHYSPROP_PICKUP = 0x76e,
	HINT_PHYSPROP_DROPOFF = 0x76f,
	HINT_XENAMBIENT_FOOD_DIG = 0x7d0,
	HINT_OFFWORLD_WORKER_WORK = 0x834,
	HINT_OFFWORLD_WORKER_RETURN = 0x835,
	HINT_XENSWOOPER_CIRCLING_CENTER = 0x898,
	HINT_XENSWOOPER_LANDING_SPOT = 0x899,
	HINT_XENSWOOPER_FOOD = 0x89a,
	HINT_XENJELLYFISH_FOOD = 0x8fc,
	HINT_XENJELLYFISH_REACH = 0x8fd,
	HINT_XENGORILLA_RETREAT_SPOT = 0x960,
	HINT_FLITTER_BURROW = 0x9c4,
	HINT_OFFWORLD_STORK_RESTOCK = 0xa28,
	HINT_OFFWORLD_STORK_DEPLOY = 0xa29,
	HINT_OFFWORLD_PENTATANK_SENTRY_POINT = 0xa8c,
};
