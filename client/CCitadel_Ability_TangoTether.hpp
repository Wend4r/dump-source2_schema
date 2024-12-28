#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe38
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
class CCitadel_Ability_TangoTether : public C_CitadelBaseAbility
{
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCastStartPos; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecDashStartPos; // 0xca8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecDashEndPos; // 0xcb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	QAngle m_angDashStartAng; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashStartTime; // 0xccc	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xcd0	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xcd4	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xcd8	
	float m_flVelSpring; // 0xcdc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xce0	
	int32_t m_nTicksNotMoving; // 0xce4	
	Vector m_vecPrevPos; // 0xce8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xcf4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xde4	
	ParticleIndex_t m_nGrappleTravelEffect; // 0xe34	
};

