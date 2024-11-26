#pragma once

#include <cstdint>

struct CAI_Path;
struct CAI_WaypointList;
struct GameTime_t;
struct CSimTimer;
struct CNavSmartGoalHelper;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
class CAI_Navigator : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	float m_flGoalStoppingDistance; // 0x48	
	Navigation_t m_navType; // 0x4c	
	bool m_bNavComplete; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x1f]; // 0x51
public:
	CAI_Path* m_pPath; // 0x70	
	CHandle< CBaseEntity > m_hLosTarget; // 0x78	
	Vector m_vThreatPos; // 0x7c	
	CAI_WaypointList m_interruptPathWaypoints; // 0x88	
	GameTime_t m_flLastSuccessfulSimplifyTime; // 0x90	
	GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x94	
	GameTime_t m_flLastMoveTime; // 0x98	
	GameTime_t m_flStartWaitingForFacingTime; // 0x9c	
	bool m_bPeerMoveWait; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a1[0x3]; // 0xa1
public:
	CHandle< CBaseEntity > m_hPeerWaitingOn; // 0xa4	
	CSimTimer m_PeerWaitMoveTimer; // 0xa8	
	CSimTimer m_PeerWaitClearTimer; // 0xb4	
	CSimTimer m_NextSidestepTimer; // 0xc0	
	CHandle< CBaseEntity > m_hBigStepGroundEnt; // 0xcc	
	CHandle< CBaseEntity > m_hLastBlockingEnt; // 0xd0	
	Vector m_vPosBeginFailedSteer; // 0xd4	
	GameTime_t m_timeBeginFailedSteer; // 0xe0	
	int32_t m_nNavFailCounter; // 0xe4	
	GameTime_t m_flLastNavFailTime; // 0xe8	
	bool m_bShouldBruteForceFailedNav; // 0xec	
	bool m_bNavChangedAlongPath; // 0xed	
private:
	[[maybe_unused]] uint8_t __pad00ee[0x2]; // 0xee
public:
	int32_t m_nPreviousCollisionGroup; // 0xf0	
	GameTime_t m_flLastNpcOverlapTime; // 0xf4	
	float m_flGoalTolerance; // 0xf8	
	float m_flWaypointTolerance; // 0xfc	
	Vector m_vGoalDirection; // 0x100	
	CHandle< CBaseEntity > m_hGoalDirectionTarget; // 0x10c	
	float m_flGoalDirectionToleranceDot; // 0x110	
	StanceType_t m_eGoalStance; // 0x114	
	float m_flPathEndGoalRange; // 0x118	
	float m_flPathEndGoalRange_Repathing; // 0x11c	
	float m_flGoalMaxPathLength; // 0x120	
	float m_flGoalMaxTravelDist; // 0x124	
	CUtlString m_pathRestrictionTag; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0130[0x18]; // 0x130
public:
	CNavSmartGoalHelper m_smartGoalHelper; // 0x148	
};

