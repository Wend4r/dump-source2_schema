#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd88
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
	[[maybe_unused]] uint8_t __pad0b08[0x10]; // 0xb08
public:
	int32_t m_iTargetPosIndex; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShadowFormCast; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b1d[0x3]; // 0xb1d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vYamatoCastPos; // 0xb20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vTargetCastPos; // 0xb2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flFlyingToTargetStartTime; // 0xb38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndAttackTime; // 0xb3c	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xb40	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xb44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackLatchTime; // 0xb48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttackLatchPos; // 0xb4c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xb58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xb5c	
	CHandle< CBaseEntity > m_hAttackTarget; // 0xb60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnPathChanged"
	Vector m_rgPath[20]; // 0xb64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathIdx; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathSize; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flPathLength; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vFlyingInitialOffsetToPath; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float flDistFlown; // 0xc6c	
	Vector m_vLastSafePos; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c7c[0xac]; // 0xc7c
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0x54]; // 0xd2c
public:
	bool m_bPathDirty; // 0xd80	
};

