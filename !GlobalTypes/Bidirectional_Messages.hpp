#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class Bidirectional_Messages : uint32_t
{
	bi_RebroadcastGameEvent = 0x10,
	bi_RebroadcastSource = 0x11,
	bi_GameEvent = 0x12,
	bi_PredictionEvent = 0x13,
};

