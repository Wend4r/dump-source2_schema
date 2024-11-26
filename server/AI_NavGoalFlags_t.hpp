#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 14
// Alignment: 4
// Size: 0x4
enum class AI_NavGoalFlags_t : uint32_t
{
	eYawToDest = 0x1,
	eDisableUpdateGoalPos = 0x2,
	eLocalSucceedOnWithinTolerance = 0x4,
	eGoalOffsetInLocalYaw = 0x8,
	eGoalOffsetInLocalSpace = 0x10,
	eDestInWorldSpace = 0x20,
	eDontLimitGoalOffset = 0x40,
	eInterruptPath = 0x80,
	eDisablePathSmoothing = 0x100,
	eClearGoalOffsetOnRepathForMovement = 0x200,
	eUseTargetPredictedPosition = 0x400,
	eDisableTargetPredictedPositionForDynamicPathing = 0x800,
	eDisableStopAtGoal = 0x1000,
	// MEnumeratorIsNotAFlag
	eDefault = 0x0,
};

