#pragma once

#include <cstdint>

struct GlitchSettings_t;
struct DamageReceivedSounds_t;
struct HealingReceivedSounds_t;
struct DamageIndicatorSounds_t;
struct LaneDesc_t;
struct DOFDesc_t;
struct RejuvinatorParams_t;
struct IdolParams_t;
struct TeleporterParams_t;
struct ObjectivesParams_t;
struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xef0
// 
// MVDataRoot
// MVDataSingleton
// MGetKV3ClassDefaults
struct CitadelGenericData_t
{
public:
	CUtlOrderedMap< EDamageFlashType, DamageFlashSettings_t > m_mapDamageFlash; // 0x0	
	// -> m_flStrength - 0x28
	// -> m_nQuantizeType - 0x2c
	// -> m_flQuantizeScale - 0x30
	// -> m_flQuantizeStrength - 0x34
	// -> m_flFrameRate - 0x38
	// -> m_flSpeed - 0x3c
	// -> m_flJumpStrength - 0x40
	// -> m_flDistortStrength - 0x44
	// -> m_flWhiteNoiseStrength - 0x48
	// -> m_flScanlineStrength - 0x4c
	// -> m_flBreakupStrength - 0x50
	GlitchSettings_t m_GlitchSettings; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlOrderedMap< ECurrencyType, CurrencySound_t > m_CurrencyTypeSounds; // 0x58	
	CUtlOrderedMap< EUISound, CSoundEventName > m_UISounds; // 0x80	
	DamageReceivedSounds_t m_DamageReceivedSounds; // 0xa8	
	HealingReceivedSounds_t m_HealingReceivedSounds; // 0x108	
	DamageIndicatorSounds_t m_DamageIndicatorSounds; // 0x138	
	CSoundEventName m_strExitCombatSound; // 0x198	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShoppingEffect; // 0x1a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MinimapZiplinesParticle; // 0x288	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillStreakFireParticle; // 0x368	
	LaneDesc_t m_LaneInfo[6]; // 0x448	
	LaneDesc_t m_NoLaneZip; // 0x508	
	Color m_MinimapTeamRebelsColor; // 0x528	
	Color m_MinimapTeamCombineColor; // 0x52c	
	// -> m_strSkillTierName - 0x530
	// -> m_NetWorth - 0x538
	// -> m_DamageTaken - 0x53c
	// -> m_BossDamage - 0x540
	// -> m_PlayerDamage - 0x544
	// -> m_LastHits - 0x548
	// -> m_OrbsSecured - 0x54c
	// -> m_OrbsDenied - 0x550
	// -> m_AbilitiesUpgraded - 0x554
	// -> m_ModsPurchased - 0x558
	NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x530	
	int32_t m_nItemPricePerTier[5]; // 0x5f0	
	float m_flLanePhaseGoldShareFrac[6]; // 0x604	
	float m_flPostLanePhaseGoldShareFrac[6]; // 0x61c	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	CUtlVector< CSubclassName< 4 > > m_HeroTestingTargetDummyUpgrades; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad0650[0x58]; // 0x650
public:
	DOFDesc_t m_DefaultDOF; // 0x6a8	
	RejuvinatorParams_t m_RejuvParams; // 0x6b8	
	IdolParams_t m_IdolParams; // 0x708	
	TeleporterParams_t m_TeleporterParams; // 0xc60	
	// -> m_GoldPerOrb - 0xe50
	// -> m_nTier1GoldKill - 0xe54
	// -> m_nTier1GoldOrbs - 0xe58
	// -> m_nTier2GoldKill - 0xe5c
	// -> m_nTier2GoldOrbs - 0xe60
	// -> m_nBaseGuardiansGoldKill - 0xe64
	// -> m_nBaseGuardiansGoldOrbs - 0xe68
	// -> m_nShrinesGoldKill - 0xe6c
	// -> m_nShrinesGoldOrbs - 0xe70
	// -> m_nPatronPhase1GoldKill - 0xe74
	// -> m_nPatronPhase1GoldOrbs - 0xe78
	ObjectivesParams_t m_ObjectiveParams; // 0xe50	
private:
	[[maybe_unused]] uint8_t __pad0e7c[0x4]; // 0xe7c
public:
	CUtlOrderedMap< EStatsType, CUtlString > m_mapStatTypeImages; // 0xe80	
	// MPropertyDescription "Remap camera angle delta to aim spring strength"
	CRemapFloat m_AimSpringStrength; // 0xea8	
	// MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
	CRemapFloat m_TargetingSpringStrength; // 0xeb8	
	CUtlOrderedMap< EAbilityResourceType, HeroAbilityResourceDef_t > m_mapResourceTypes; // 0xec8	
};

