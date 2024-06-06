#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 14
// Alignment: 1
// Size: 0x1
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0x0,
	MOVETYPE_OBSOLETE = 0x1,
	MOVETYPE_WALK = 0x2,
	MOVETYPE_FLY = 0x3,
	MOVETYPE_FLYGRAVITY = 0x4,
	MOVETYPE_VPHYSICS = 0x5,
	MOVETYPE_PUSH = 0x6,
	MOVETYPE_NOCLIP = 0x7,
	MOVETYPE_OBSERVER = 0x8,
	MOVETYPE_LADDER = 0x9,
	MOVETYPE_CUSTOM = 0xa,
	MOVETYPE_LAST = 0xb,
	MOVETYPE_INVALID = 0xb,
	MOVETYPE_MAX_BITS = 0x5,
};

