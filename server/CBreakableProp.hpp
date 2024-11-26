#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf0
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0a80[0x8]; // 0xa80
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0xa88	
	CEntityIOOutput m_OnBreak; // 0xac8	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xaf0	
	CEntityIOOutput m_OnTakeDamage; // 0xb18	
	float m_impactEnergyScale; // 0xb40	
	int32_t m_iMinHealthDmg; // 0xb44	
	QAngle m_preferredCarryAngles; // 0xb48	
	float m_flPressureDelay; // 0xb54	
	float m_flDefBurstScale; // 0xb58	
	Vector m_vDefBurstOffset; // 0xb5c	
	CHandle< CBaseEntity > m_hBreaker; // 0xb68	
	PerformanceMode_t m_PerformanceMode; // 0xb6c	
	GameTime_t m_flPreventDamageBeforeTime; // 0xb70	
	BreakableContentsType_t m_BreakableContentsType; // 0xb74	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xb78	
	CUtlString m_strBreakableContentsParticleOverride; // 0xb80	
	bool m_bHasBreakPiecesOrCommands; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b89[0x3]; // 0xb89
public:
	float m_explodeDamage; // 0xb8c	
	float m_explodeRadius; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	float m_explosionDelay; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b9c[0x4]; // 0xb9c
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xba0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xba8	
	CUtlSymbolLarge m_explosionCustomSound; // 0xbb0	
	CUtlSymbolLarge m_explosionModifier; // 0xbb8	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xbc0	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xbc4	
	bool m_bOriginalBlockLOS; // 0xbc8	
private:
	[[maybe_unused]] uint8_t __pad0bc9[0x3]; // 0xbc9
public:
	float m_flDefaultFadeScale; // 0xbcc	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xbd0	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xbd4	
	bool m_bUsePuntSound; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0bd9[0x7]; // 0xbd9
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xbe0	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xbe8	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// bool InputSetNavIgnore; // 0x0
	// void InputEnablePuntSound; // 0x0
	// void InputDisablePuntSound; // 0x0
	// void CBreakablePropBreakThink; // 0x0
	// void CBreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xb94
};

