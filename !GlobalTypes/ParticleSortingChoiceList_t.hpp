#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleSortingChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Distance - Nearest"
	PARTICLE_SORTING_NEAREST = 0x0,
	// MPropertyFriendlyName "Age - Oldest"
	PARTICLE_SORTING_CREATION_TIME = 0x1,
};

