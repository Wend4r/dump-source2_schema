#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class PointOrientGoalDirectionType_t : uint32_t
{
	eAbsOrigin = 0x0,
	eCenter = 0x1,
	eHead = 0x2,
	eForward = 0x3,
	eEyesForward = 0x4,
};

