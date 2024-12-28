#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastStartPos"
// MNetworkVarNames "Vector m_vecDashStartPos"
// MNetworkVarNames "Vector m_vecDashEndPos"
// MNetworkVarNames "QAngle m_angDashStartAng"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgTargetPos"
// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
class CCitadel_Ability_TangoTether : public CCitadelBaseAbility
{
public:
	int32_t m_iTargetPosIndex; // 0xaf8	
	CHandle< CBaseEntity > m_hLockOnTarget; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCastStartPos; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecDashStartPos; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecDashEndPos; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	QAngle m_angDashStartAng; // 0xb24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashStartTime; // 0xb30	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xb34	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xb38	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xb3c	
	float m_flVelSpring; // 0xb40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xb44	
	int32_t m_nTicksNotMoving; // 0xb48	
	Vector m_vecPrevPos; // 0xb4c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xb58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xc48	
	ParticleIndex_t m_nGrappleTravelEffect; // 0xc98	
};

