#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 10
// Alignment: 1
// Size: 0x1
enum class SurroundingBoundsType_t : uint8_t
{
	USE_OBB_COLLISION_BOUNDS = 0x0,
	USE_BEST_COLLISION_BOUNDS = 0x1,
	USE_HITBOXES = 0x2,
	USE_SPECIFIED_BOUNDS = 0x3,
	USE_GAME_CODE = 0x4,
	USE_ROTATION_EXPANDED_BOUNDS = 0x5,
	USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 0x6,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 0x7,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x8,
	SURROUNDING_TYPE_BIT_COUNT = 0x3,
};

