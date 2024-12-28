#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdb8
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
	[[maybe_unused]] uint8_t __pad0b00[0x10]; // 0xb00
public:
	int32_t m_iTargetPosIndex; // 0xb10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShadowFormCast; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b15[0x3]; // 0xb15
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vYamatoCastPos; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	Vector m_vTargetCastPos; // 0xb24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flFlyingToTargetStartTime; // 0xb30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndAttackTime; // 0xb34	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xb38	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xb3c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackLatchTime; // 0xb40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttackLatchPos; // 0xb44	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xb50	
	// MNetworkEnable
	bool m_bIsTargetAlly; // 0xb54	
private:
	[[maybe_unused]] uint8_t __pad0b55[0x3]; // 0xb55
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xb58	
	CHandle< CBaseEntity > m_hAttackTarget; // 0xb5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnPathChanged"
	Vector m_rgPath[20]; // 0xb60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathIdx; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nPathSize; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flPathLength; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vFlyingInitialOffsetToPath; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float flDistFlown; // 0xc68	
	Vector m_vLastSafePos; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c78[0xe0]; // 0xc78
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d5c[0x54]; // 0xd5c
public:
	bool m_bPathDirty; // 0xdb0	
};

