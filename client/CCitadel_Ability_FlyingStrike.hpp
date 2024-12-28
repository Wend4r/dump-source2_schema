#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf58
// Has VTable
// 
// MNetworkVarNames "bool m_bShadowFormCast"
// MNetworkVarNames "Vector m_vYamatoCastPos"
// MNetworkVarNames "Vector m_vTargetCastPos"
// MNetworkVarNames "GameTime_t m_flFlyingToTargetStartTime"
// MNetworkVarNames "GameTime_t m_flEndAttackTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "GameTime_t m_flAttackLatchTime"
// MNetworkVarNames "Vector m_vAttackLatchPos"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "bool m_bIsTargetAlly"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgPath"
// MNetworkVarNames "int m_nPathIdx"
// MNetworkVarNames "int m_nPathSize"
// MNetworkVarNames "float m_flPathLength"
// MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
// MNetworkVarNames "float flDistFlown"
class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x10]; // 0xca0
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShadowFormCast; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vYamatoCastPos; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vTargetCastPos; // 0xcc4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flFlyingToTargetStartTime; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndAttackTime; // 0xcd4	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xcd8	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xcdc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackLatchTime; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttackLatchPos; // 0xce4	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xcf0	
	// MNetworkEnable
	bool m_bIsTargetAlly; // 0xcf4	
private:
	[[maybe_unused]] uint8_t __pad0cf5[0x3]; // 0xcf5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cfc[0x4]; // 0xcfc
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnPathChanged"
	Vector m_rgPath[20]; // 0xd00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathIdx; // 0xdf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathSize; // 0xdf4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flPathLength; // 0xdf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vFlyingInitialOffsetToPath; // 0xdfc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float flDistFlown; // 0xe08	
	Vector m_vLastSafePos; // 0xe0c	
private:
	[[maybe_unused]] uint8_t __pad0e18[0xe0]; // 0xe18
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0efc[0x54]; // 0xefc
public:
	bool m_bPathDirty; // 0xf50	
};

