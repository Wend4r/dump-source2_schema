#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0a78[0x8]; // 0xa78
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0xa80	
	CEntityIOOutput m_OnBreak; // 0xac0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xae8	
	CEntityIOOutput m_OnTakeDamage; // 0xb10	
	float m_impactEnergyScale; // 0xb38	
	int32_t m_iMinHealthDmg; // 0xb3c	
	QAngle m_preferredCarryAngles; // 0xb40	
	float m_flPressureDelay; // 0xb4c	
	float m_flDefBurstScale; // 0xb50	
	Vector m_vDefBurstOffset; // 0xb54	
	CHandle< CBaseEntity > m_hBreaker; // 0xb60	
	PerformanceMode_t m_PerformanceMode; // 0xb64	
	GameTime_t m_flPreventDamageBeforeTime; // 0xb68	
	BreakableContentsType_t m_BreakableContentsType; // 0xb6c	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xb70	
	CUtlString m_strBreakableContentsParticleOverride; // 0xb78	
	bool m_bHasBreakPiecesOrCommands; // 0xb80	
private:
	[[maybe_unused]] uint8_t __pad0b81[0x3]; // 0xb81
public:
	float m_explodeDamage; // 0xb84	
	float m_explodeRadius; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b8c[0x4]; // 0xb8c
public:
	float m_explosionDelay; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xb98	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xba0	
	CUtlSymbolLarge m_explosionCustomSound; // 0xba8	
	CUtlSymbolLarge m_explosionModifier; // 0xbb0	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xbb8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xbbc	
	bool m_bOriginalBlockLOS; // 0xbc0	
private:
	[[maybe_unused]] uint8_t __pad0bc1[0x3]; // 0xbc1
public:
	float m_flDefaultFadeScale; // 0xbc4	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xbc8	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xbcc	
	bool m_bUsePuntSound; // 0xbd0	
private:
	[[maybe_unused]] uint8_t __pad0bd1[0x7]; // 0xbd1
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xbd8	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xbe0	
	
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
	// uint32_t m_nExplosionType; // 0xb8c
};

