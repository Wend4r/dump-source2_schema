#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class CanPlaySequence_t : uint32_t
{
	CANNOT_PLAY = 0x0,
	CAN_PLAY_NOW = 0x1,
	CAN_PLAY_ENQUEUED = 0x2,
};

