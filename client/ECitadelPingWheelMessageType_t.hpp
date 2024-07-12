#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ECitadelPingWheelMessageType_t : uint32_t
{
	CITADEL_PING_WHEEL_PREGAME = 0x0,
	CITADEL_PING_WHEEL_INPROGRESS = 0x1,
	CITADEL_PING_WHEEL_DISABLED_WHILE_DEAD = 0x2,
	CITADEL_PING_WHEEL_POSTGAME = 0x3,
	CITADEL_PING_WHEEL_CONTEXTUAL = 0x4,
	// MPropertySuppressEnumerator
	CITADEL_PING_WHEEL_SUBNAV = 0x5,
	// MPropertySuppressEnumerator
	CITADEL_PING_WHEEL_COUNT = 0x6,
};
