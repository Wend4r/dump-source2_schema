#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class AI_Motor_MovementFacingModeRequestSource_t : uint32_t
{
	eLevelScript = 0x0,
	eSmartGoal = 0x1,
	eSchedule = 0x2,
	eDefault = 0x3,
	eCount = 0x4,
};

