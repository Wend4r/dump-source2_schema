#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class AI_Motor_FacingTargetRequestSource_t : uint32_t
{
	eInvalid = 0xffffffffffffffff,
	eMotor = 0x0,
	eChoreo = 0x1,
	eLevelScript = 0x2,
	eSmartGoal = 0x3,
	eSchedule = 0x4,
	eCount = 0x5,
};

