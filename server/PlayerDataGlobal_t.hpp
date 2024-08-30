#pragma once

#include <cstdint>

struct GameTime_t;
struct HeroID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MNetworkVarNames "int32 m_iLevel"
// MNetworkVarNames "int32 m_iMaxAmmo"
// MNetworkVarNames "int32 m_iHealthMax"
// MNetworkVarNames "float m_flHealthRegen"
// MNetworkVarNames "GameTime_t m_flRespawnTime"
// MNetworkVarNames "HeroID_t m_nHeroID"
// MNetworkVarNames "int32 m_iGoldNetWorth"
// MNetworkVarNames "int32 m_iAPNetWorth"
// MNetworkVarNames "int32 m_iCreepGold"
// MNetworkVarNames "int32 m_iCreepGoldSoloBonus"
// MNetworkVarNames "int32 m_iCreepGoldKill"
// MNetworkVarNames "int32 m_iCreepGoldAirOrb"
// MNetworkVarNames "int32 m_iCreepGoldGroundOrb"
// MNetworkVarNames "int32 m_iCreepGoldDeny"
// MNetworkVarNames "int32 m_iCreepGoldNeutral"
// MNetworkVarNames "int32 m_iFarmBaseline"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "int32 m_iPlayerKills"
// MNetworkVarNames "int32 m_iPlayerAssists"
// MNetworkVarNames "int32 m_iDeaths"
// MNetworkVarNames "int32 m_iDenies"
// MNetworkVarNames "int32 m_iLastHits"
// MNetworkVarNames "bool m_bAlive"
// MNetworkVarNames "int32 m_nHeroDraftPosition"
// MNetworkVarNames "bool m_bUltimateTrained"
// MNetworkVarNames "GameTime_t m_flUltimateCooldownStart"
// MNetworkVarNames "GameTime_t m_flUltimateCooldownEnd"
// MNetworkVarNames "bool m_bHasRejuvenator"
// MNetworkVarNames "bool m_bHasRebirth"
// MNetworkVarNames "int32 m_iHeroDamage"
// MNetworkVarNames "int32 m_iHeroHealing"
// MNetworkVarNames "int32 m_iSelfHealing"
// MNetworkVarNames "int32 m_iObjectiveDamage"
// MNetworkVarNames "int32 m_nHeroAbilityUpgradeBits"
// MNetworkVarNames "EntitySubclassID_t m_vecUpgrades"
// MNetworkVarNames "EntitySubclassID_t m_vecBonusCounterAbilities"
// MNetworkVarNames "int32 m_vecBonusCounterValues"
// MNetworkVarNames "AbilityID_t m_tHeldItem"
// MNetworkVarNames "ItemImbuementPair_t m_vecImbuements"
// MNetworkVarNames "DynamicAbilityValues_t m_vecDynamicAbilityValues"
// MNetworkVarNames "StatViewerModifierValues_t m_vecStatViewerModifierValues"
struct PlayerDataGlobal_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_iLevel; // 0x8	
	// MNetworkEnable
	int32_t m_iMaxAmmo; // 0xc	
	// MNetworkEnable
	int32_t m_iHealthMax; // 0x10	
	// MNetworkEnable
	float m_flHealthRegen; // 0x14	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0x18	
	// MNetworkEnable
	HeroID_t m_nHeroID; // 0x1c	
	// MNetworkEnable
	int32_t m_iGoldNetWorth; // 0x20	
	// MNetworkEnable
	int32_t m_iAPNetWorth; // 0x24	
	// MNetworkEnable
	int32_t m_iCreepGold; // 0x28	
	// MNetworkEnable
	int32_t m_iCreepGoldSoloBonus; // 0x2c	
	// MNetworkEnable
	int32_t m_iCreepGoldKill; // 0x30	
	// MNetworkEnable
	int32_t m_iCreepGoldAirOrb; // 0x34	
	// MNetworkEnable
	int32_t m_iCreepGoldGroundOrb; // 0x38	
	// MNetworkEnable
	int32_t m_iCreepGoldDeny; // 0x3c	
	// MNetworkEnable
	int32_t m_iCreepGoldNeutral; // 0x40	
	// MNetworkEnable
	int32_t m_iFarmBaseline; // 0x44	
	// MNetworkEnable
	int32_t m_iHealth; // 0x48	
	// MNetworkEnable
	int32_t m_iPlayerKills; // 0x4c	
	// MNetworkEnable
	int32_t m_iPlayerAssists; // 0x50	
	// MNetworkEnable
	int32_t m_iDeaths; // 0x54	
	// MNetworkEnable
	int32_t m_iDenies; // 0x58	
	// MNetworkEnable
	int32_t m_iLastHits; // 0x5c	
	// MNetworkEnable
	bool m_bAlive; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x3]; // 0x61
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HeroDraftPositionChanged"
	int32_t m_nHeroDraftPosition; // 0x64	
	// MNetworkEnable
	bool m_bUltimateTrained; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	// MNetworkEnable
	GameTime_t m_flUltimateCooldownStart; // 0x6c	
	// MNetworkEnable
	GameTime_t m_flUltimateCooldownEnd; // 0x70	
	// MNetworkEnable
	bool m_bHasRejuvenator; // 0x74	
	// MNetworkEnable
	bool m_bHasRebirth; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MNetworkEnable
	int32_t m_iHeroDamage; // 0x78	
	// MNetworkEnable
	int32_t m_iHeroHealing; // 0x7c	
	// MNetworkEnable
	int32_t m_iSelfHealing; // 0x80	
	// MNetworkEnable
	int32_t m_iObjectiveDamage; // 0x84	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgAbilitiesChanged"
	int32_t m_nHeroAbilityUpgradeBits[4]; // 0x88	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgUpgradesChanged"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecUpgrades; // 0x98	
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterAbilities; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgBonusCounterChanged"
	CNetworkUtlVectorBase< int32 > m_vecBonusCounterValues; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgUpgradesChanged"
	CUtlStringToken m_tHeldItem; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e4[0x4]; // 0xe4
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< ItemImbuementPair_t > m_vecImbuements; // 0xe8	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< DynamicAbilityValues_t > m_vecDynamicAbilityValues; // 0x138	
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< StatViewerModifierValues_t > m_vecStatViewerModifierValues; // 0x188	
};

