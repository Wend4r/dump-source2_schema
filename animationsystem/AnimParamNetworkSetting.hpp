#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimParamNetworkSetting : uint32_t
{
	// MPropertyFriendlyName "Auto"
	Auto = 0x0,
	// MPropertyFriendlyName "Always Network"
	AlwaysNetwork = 0x1,
	// MPropertyFriendlyName "Never Network"
	NeverNetwork = 0x2,
};
