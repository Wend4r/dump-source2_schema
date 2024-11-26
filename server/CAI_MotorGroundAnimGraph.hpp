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
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x240
class CAI_MotorGroundAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10	
	CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30	
	CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x58	
	CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0x78	
	// -> m_vGoalPosition - 0xc0
	// -> m_vArrivalDirection - 0xcc
	// -> m_bPathChanged - 0xd8
	CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xa0	
	CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0xe0	
	CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x120	
	CAI_MotorGroundAnimGraph_State_MovePerformance m_stateMovePerformance; // 0x160	
	// -> m_bRepathed - 0x1e0
	// -> m_bPathChanged - 0x1e1
	CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01e8[0x18]; // 0x1e8
public:
	int32_t m_nCurrentState; // 0x200	
	float m_flDistanceCoveredInCurrentState; // 0x204	
	bool m_bEnableStop; // 0x208	
	bool m_bEnableStart; // 0x209	
	bool m_bHadPath; // 0x20a	
private:
	[[maybe_unused]] uint8_t __pad020b[0x1]; // 0x20b
public:
	AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x20c	
	Vector m_vPreviousPosition; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	float m_flCurrentLean; // 0x220	
	RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x224	
	float m_flPrevDesiredMovementHeading; // 0x230	
	float m_flSmoothedDesiredMovementHeadingChange; // 0x234	
};

