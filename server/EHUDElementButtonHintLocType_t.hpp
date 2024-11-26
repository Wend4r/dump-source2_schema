#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EHUDElementButtonHintLocType_t : uint32_t
{
	// MPropertyFriendlyName "Ability Cast"
	EButtonHintLocType_Cast = 0x0,
	// MPropertyFriendlyName "Ability Alt-Cast"
	EButtonHintLocType_AltCast = 0x1,
	// MPropertyFriendlyName "Custom"
	EButtonHintLocType_Custom = 0x2,
};

