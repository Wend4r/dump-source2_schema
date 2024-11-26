#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class OrientationWarpTargetOffsetMode_t : uint32_t
{
	// MPropertyFriendlyName "Literal Value"
	eLiteralValue = 0x0,
	// MPropertyFriendlyName "Parameter"
	eParameter = 0x1,
	// MPropertyFriendlyName "Animation Movement Heading"
	eAnimationMovementHeading = 0x2,
	// MPropertyFriendlyName "Animation Movement Heading At End"
	eAnimationMovementHeadingAtEnd = 0x3,
};

