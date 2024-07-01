#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleVRHandChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Left Hand"
	PARTICLE_VRHAND_LEFT = 0x0,
	// MPropertyFriendlyName "Right Hand"
	PARTICLE_VRHAND_RIGHT = 0x1,
	// MPropertyFriendlyName "Specified Via Control Point"
	PARTICLE_VRHAND_CP = 0x2,
	// MPropertyFriendlyName "Detect from CP's Object"
	PARTICLE_VRHAND_CP_OBJECT = 0x3,
};

