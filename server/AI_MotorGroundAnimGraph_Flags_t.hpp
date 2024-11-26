#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class AI_MotorGroundAnimGraph_Flags_t : uint32_t
{
	eNone = 0x0,
	eDelayStop = 0x1,
	eWaitingForFacing = 0x2,
	eWaitingForNavigatorArrivalFacing = 0x4,
	eDelayIdleTurn = 0x8,
};

