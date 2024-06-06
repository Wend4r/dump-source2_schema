#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SmartPropRadiusPlacementMode_t : uint32_t
{
	// MPropertyFriendlyName "Place in sphere"
	// MPropertyDescription "Child elements will be placed within a sphere of the specified radius."
	SPHERE = 0x0,
	// MPropertyFriendlyName "Place in circle"
	// MPropertyDescription "Child elements will be placed within a circle of the specified radius."
	CIRCLE = 0x1,
};

