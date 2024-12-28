#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class EFlightState : uint8_t
{
	None = 0x0,
	Boosting = 0x1,
	Flying = 0x2,
};

