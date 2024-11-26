#pragma once

#include <cstdint>

struct AI_MovementHeadingSettings_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// 
// MGetKV3ClassDefaults
class AI_AdditionalMovementSettings
{
public:
	// -> m_eMode - 0x0
	// -> m_bUseBadZones - 0x4
	// -> m_badZones - 0x8
	// -> m_flPredictionLookAhead - 0x20
	AI_MovementHeadingSettings_t m_heading; // 0x0	
	float m_flAcceleration; // 0x28	
	float m_flDeceleration; // 0x2c	
	CPiecewiseCurve m_decelerationCurve; // 0x30	
	float m_flMovementMaxPathEndDirectionAngleDifferenceForStop; // 0x70	
	// MPropertyDescription "What angle between the current move direction and the direction to the next waypoint will trigger a planted turn. Any value <= 0 will use the sharp angle from the vmdl movement settings."
	float m_flMovementPlantedTurnAngleThreshold; // 0x74	
};

