#pragma once

#include <cstdint>

struct CSimpleSimTimer;
struct CAI_MotorNavLink;
struct CAI_MotorTransition;
struct CAI_MotorGroundAnimGraph;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
class CAI_Motor : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	float m_flMoveInterval; // 0x50	
	Vector m_vIdealEntityFacing; // 0x54	
	float m_flYawSpeed; // 0x60	
	Vector m_vMoveVel; // 0x64	
	Vector m_vMoveVelNavigation; // 0x70	
	Vector m_vecAngularVelocity; // 0x7c	
	CSimpleSimTimer m_timerFloorPointCached; // 0x88	
	Vector m_vFloorPointCached; // 0x90	
	bool m_bFloorPointCachingEnabled; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad009d[0x27]; // 0x9d
public:
	float m_flSpeed; // 0xc4	
	bool m_bMovementActive; // 0xc8	
	bool m_bEmbeddedRecoveryEnabled; // 0xc9	
	bool m_pEnableForceFacing[2]; // 0xca	
	uint8_t m_nEntityFacingLockCount; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00cd[0x3]; // 0xcd
public:
	CUtlVector< ChoreoEntityFacing_t > m_vecChoreoEntityFacings; // 0xd0	
	Vector m_vBoundaryDistCachedPos; // 0xe8	
	float m_flBoundaryDistCached; // 0xf4	
	CAI_MotorNavLink m_motorNavLink; // 0xf8	
	CAI_MotorTransition m_motorTransition; // 0x170	
	CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // 0x1d0	
	bool m_bIsExecutingMoveSolve; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad0469[0x3]; // 0x469
public:
	CAI_InterestTarget m_pEntityFacingRequests[5]; // 0x46c	
	AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority; // 0x570	
	AI_Motor_MovementFacingMode_t m_movementFacingModeRequests[4]; // 0x571	
	AI_Motor_DefaultFacing_t m_eDefaultFacing; // 0x575	
	AI_Motor_DefaultFacing_t m_eScheduleDefaultFacing; // 0x576	
};

