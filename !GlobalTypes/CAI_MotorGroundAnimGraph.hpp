#pragma once

#include <cstdint>

struct CAI_MotorGroundAnimGraph_State_Idle;
struct CAI_MotorGroundAnimGraph_State_IdleTurn;
struct CAI_MotorGroundAnimGraph_State_Loop;
struct CAI_MotorGroundAnimGraph_State_Start;
struct CAI_MotorGroundAnimGraph_State_Stop;
struct CAI_MotorGroundAnimGraph_State_InstantStop;
struct CAI_MotorGroundAnimGraph_State_Hop;
struct CAI_MotorGroundAnimGraph_State_MovePerformance;
struct CAI_MotorGroundAnimGraph_State_PlantedTurn;
struct CAI_MotorGroundAnimGraph_State_Other;
struct CFloatExponentialMovingAverage;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x298
class CAI_MotorGroundAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10	
	// -> m_eType - 0x50
	// -> m_vOriginalTargetFacingPosition - 0x54
	// -> m_vTargetFacingPosition - 0x60
	// -> m_flOriginalAngleDelta - 0x6c
	// -> m_bWasBlockIdleTurnTagActive - 0x70
	CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30	
	CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x78	
	CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0xa0	
	// -> m_vGoalPosition - 0xe8
	// -> m_vArrivalDirection - 0xf4
	// -> m_bPathChanged - 0x100
	CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xc8	
	CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0x108	
	CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x148	
	// -> m_sHandshake - 0x1a8
	// -> m_dynamicSettings - 0x1b0
	CAI_MotorGroundAnimGraph_State_MovePerformance m_stateMovePerformance; // 0x188	
	// -> m_bRepathed - 0x208
	// -> m_bPathChanged - 0x209
	CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x1e8	
	CAI_MotorGroundAnimGraph_State_Other m_stateOther; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0230[0x18]; // 0x230
public:
	int32_t m_nCurrentState; // 0x248	
	float m_flDistanceCoveredInCurrentState; // 0x24c	
	bool m_bEnableStop; // 0x250	
	bool m_bEnableStart; // 0x251	
	bool m_bHadPath; // 0x252	
private:
	[[maybe_unused]] uint8_t __pad0253[0x1]; // 0x253
public:
	AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x254	
	Vector m_vPreviousPosition; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad0264[0x4]; // 0x264
public:
	float m_flCurrentLean; // 0x268	
	RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x26c	
	CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading; // 0x278	
};

