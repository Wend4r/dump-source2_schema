#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleDetailLevel_t : uint32_t
{
	// MPropertyFriendlyName "Low"
	PARTICLEDETAIL_LOW = 0x0,
	// MPropertyFriendlyName "Medium"
	PARTICLEDETAIL_MEDIUM = 0x1,
	// MPropertyFriendlyName "High"
	PARTICLEDETAIL_HIGH = 0x2,
	// MPropertyFriendlyName "Ultra"
	PARTICLEDETAIL_ULTRA = 0x3,
};

