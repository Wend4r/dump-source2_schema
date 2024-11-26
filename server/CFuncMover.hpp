#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x970
// Has VTable
class CFuncMover : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iszPathName; // 0x7c0	
	CHandle< CPathMover > m_hPathMover; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07cc[0x4]; // 0x7cc
public:
	CUtlSymbolLarge m_iszPathNodeStart; // 0x7d0	
	CUtlSymbolLarge m_iszPathNodeEnd; // 0x7d8	
	CFuncMover::Move_t m_eMoveType; // 0x7e0	
	bool m_bIsReversing; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07e5[0x3]; // 0x7e5
public:
	Vector m_vTarget; // 0x7e8	
	float m_flStartSpeed; // 0x7f4	
	float m_flPathLocation; // 0x7f8	
	float m_flT; // 0x7fc	
	int32_t m_nCurrentNodeIndex; // 0x800	
	int32_t m_nPreviousNodeIndex; // 0x804	
	SolidType_t m_eSolidType; // 0x808	
	bool m_bIsMoving; // 0x809	
private:
	[[maybe_unused]] uint8_t __pad080a[0x2]; // 0x80a
public:
	float m_flTimeToReachMaxSpeed; // 0x80c	
	float m_flDistanceToReachMaxSpeed; // 0x810	
	float m_flTimeToReachZeroSpeed; // 0x814	
	float m_flDistanceToReachZeroSpeed; // 0x818	
	GameTime_t m_flTimeMovementStart; // 0x81c	
	GameTime_t m_flTimeMovementStop; // 0x820	
	CHandle< CMoverPathNode > m_hStopAtNode; // 0x824	
	float m_flPathLocationToBeginStop; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	CUtlSymbolLarge m_iszStartForwardSound; // 0x830	
	CUtlSymbolLarge m_iszLoopForwardSound; // 0x838	
	CUtlSymbolLarge m_iszStopForwardSound; // 0x840	
	CUtlSymbolLarge m_iszStartReverseSound; // 0x848	
	CUtlSymbolLarge m_iszLoopReverseSound; // 0x850	
	CUtlSymbolLarge m_iszStopReverseSound; // 0x858	
	CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0868[0x8]; // 0x868
public:
	CEntityIOOutput m_OnMovementEnd; // 0x870	
	bool m_bStartAtEnd; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
public:
	CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // 0x89c	
	GameTime_t m_flTimeStartOrientationChange; // 0x8a0	
	float m_flTimeToBlendToNewOrientation; // 0x8a4	
	float m_flDurationBlendToNewOrientationRan; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08ac[0x4]; // 0x8ac
public:
	Quaternion m_qOriginalOrientation; // 0x8b0	
	bool m_bCreateMovableNavMesh; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x7]; // 0x8c1
public:
	CEntityIOOutput m_OnNodePassed; // 0x8c8	
	CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8f0	
	CHandle< CBaseEntity > m_hOrientationMatchEntity; // 0x8f8	
	float m_flTimeToTraverseToNextNode; // 0x8fc	
	Vector m_vLerpToNewPositionStart; // 0x900	
	Vector m_vLerpToNewPositionEnd; // 0x90c	
	float m_flLerpToPositionT; // 0x918	
	float m_flLerpToPositionDeltaT; // 0x91c	
	CEntityIOOutput m_OnLerpToPositionComplete; // 0x920	
	bool m_bIsPaused; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad0949[0x3]; // 0x949
public:
	CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x94c	
	int32_t m_nDelayedTeleportToNode; // 0x950	
	bool m_bIsVerboseLogging; // 0x954	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartReverse; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
	// void InputToggleDirection; // 0x0
	// void InputPause; // 0x0
	// void InputUnpause; // 0x0
	// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
	// CUtlSymbolLarge InputMoveToPathNode; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNode; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetSpeedImmediate; // 0x0
	// float InputSetTimeToReachMaxSpeed; // 0x0
	// float InputSetTimeToBlendToNewOrientation; // 0x0
	// int32_t InputSetOrientationMode; // 0x0
	// void CFuncMoverMove; // 0x0
	// void CFuncMoverLerpToNewPosition; // 0x0
};

