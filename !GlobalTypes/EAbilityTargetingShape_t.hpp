#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class EAbilityTargetingShape_t : uint32_t
{
	CITADEL_ABILITY_TARGETING_SHAPE_NONE = 0x0,
	CITADEL_ABILITY_TARGETING_SHAPE_SPHERE = 0x1,
	CITADEL_ABILITY_TARGETING_SHAPE_LINE = 0x2,
	CITADEL_ABILITY_TARGETING_SHAPE_CIRCLE = 0x3,
	CITADEL_ABILITY_TARGETING_SHAPE_CONE = 0x4,
	CITADEL_ABILITY_TARGETING_SHAPE_CAPSULE = 0x5,
	// MPropertySuppressEnumerator
	CITADEL_ABILITY_TARGETING_SHAPE_COUNT = 0x6,
};

