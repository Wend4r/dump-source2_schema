#pragma once

#include <cstdint>

struct SatVolumeIndex_t;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf28
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
	[[maybe_unused]] uint8_t __pad0ca8[0x10]; // 0xca8
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShadowFormCast; // 0xcbc	
private:
	[[maybe_unused]] uint8_t __pad0cbd[0x3]; // 0xcbd
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vYamatoCastPos; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vTargetCastPos; // 0xccc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flFlyingToTargetStartTime; // 0xcd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndAttackTime; // 0xcdc	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xce0	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xce4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackLatchTime; // 0xce8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttackLatchPos; // 0xcec	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xcf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0d00[0x4]; // 0xd00
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnPathChanged"
	Vector m_rgPath[20]; // 0xd04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathIdx; // 0xdf4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathSize; // 0xdf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flPathLength; // 0xdfc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vFlyingInitialOffsetToPath; // 0xe00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float flDistFlown; // 0xe0c	
	Vector m_vLastSafePos; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0xac]; // 0xe1c
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xec8	
private:
	[[maybe_unused]] uint8_t __pad0ecc[0x54]; // 0xecc
public:
	bool m_bPathDirty; // 0xf20	
};

