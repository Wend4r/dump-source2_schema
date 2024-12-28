#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class StatsUsageFlags_t : uint32_t
{
	None = 0x0,
	// MPropertySuppressEnumerator
	IntrinsicallyProvidedInModifier = 0x1,
	// MPropertyFriendlyName "Provided in ability code via MModifierFunction to caster"
	IntrinsicallyProvidedInAbility = 0x2,
	// MPropertyFriendlyName "Has some condition to be applied (Close Range, High Health Pct, "
	ConditionallyApplied = 0x4,
};

