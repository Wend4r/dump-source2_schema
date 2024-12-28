#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc80
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class C_BreakableProp : public CBaseProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	// -> m_flDmgModBullet - 0xb48
	// -> m_flDmgModClub - 0xb4c
	// -> m_flDmgModExplosive - 0xb50
	// -> m_flDmgModFire - 0xb54
	// -> m_iszPhysicsDamageTableName - 0xb58
	// -> m_iszBasePropData - 0xb60
	// -> m_nInteractions - 0xb68
	// -> m_bSpawnMotionDisabled - 0xb6c
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xb70
	// -> m_nMotionDisabledSpawnFlag - 0xb74
	CPropDataComponent m_CPropDataComponent; // 0xb38	
	CEntityIOOutput m_OnBreak; // 0xb78	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xba0	
	CEntityIOOutput m_OnTakeDamage; // 0xbc8	
	float m_impactEnergyScale; // 0xbf0	
	int32_t m_iMinHealthDmg; // 0xbf4	
	float m_flPressureDelay; // 0xbf8	
	float m_flDefBurstScale; // 0xbfc	
	Vector m_vDefBurstOffset; // 0xc00	
	CHandle< C_BaseEntity > m_hBreaker; // 0xc0c	
	PerformanceMode_t m_PerformanceMode; // 0xc10	
	GameTime_t m_flPreventDamageBeforeTime; // 0xc14	
	BreakableContentsType_t m_BreakableContentsType; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0x4]; // 0xc1c
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xc20	
	CUtlString m_strBreakableContentsParticleOverride; // 0xc28	
	bool m_bHasBreakPiecesOrCommands; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c31[0x3]; // 0xc31
public:
	float m_explodeDamage; // 0xc34	
	float m_explodeRadius; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c3c[0x4]; // 0xc3c
public:
	float m_explosionDelay; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x4]; // 0xc44
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xc48	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xc50	
	CUtlSymbolLarge m_explosionCustomSound; // 0xc58	
	CUtlSymbolLarge m_explosionModifier; // 0xc60	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xc68	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xc6c	
	float m_flDefaultFadeScale; // 0xc70	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xc74	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0xc78	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xc7c	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xc3c
};

