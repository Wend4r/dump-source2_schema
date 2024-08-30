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
struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
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
	LaneDesc_t m_LaneInfo[6]; // 0x288	
	LaneDesc_t m_NoLaneZip; // 0x318	
	Color m_MinimapTeamRebelsColor; // 0x330	
	Color m_MinimapTeamCombineColor; // 0x334	
	// -> m_strSkillTierName - 0x338
	// -> m_NetWorth - 0x340
	// -> m_DamageTaken - 0x344
	// -> m_BossDamage - 0x348
	// -> m_PlayerDamage - 0x34c
	// -> m_LastHits - 0x350
	// -> m_OrbsSecured - 0x354
	// -> m_OrbsDenied - 0x358
	// -> m_AbilitiesUpgraded - 0x35c
	// -> m_ModsPurchased - 0x360
	NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x338	
	int32_t m_nItemPricePerTier[5]; // 0x3f8	
private:
	[[maybe_unused]] uint8_t __pad040c[0x4]; // 0x40c
public:
	CUtlVector< CSubclassName< 4 > > m_HeroTestingTargetDummyUpgrades; // 0x410	
private:
	[[maybe_unused]] uint8_t __pad0428[0x58]; // 0x428
public:
	DOFDesc_t m_DefaultDOF; // 0x480	
	RejuvinatorParams_t m_RejuvParams; // 0x490	
	IdolParams_t m_IdolParams; // 0x4b0	
	TeleporterParams_t m_TeleporterParams; // 0xa08	
	CUtlOrderedMap< EStatsType, CUtlString > m_mapStatTypeImages; // 0xbf8	
	// MPropertyDescription "Remap camera angle delta to aim spring strength"
	CRemapFloat m_AimSpringStrength; // 0xc20	
	// MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
	CRemapFloat m_TargetingSpringStrength; // 0xc30	
	CUtlOrderedMap< EAbilityResourceType, HeroAbilityResourceDef_t > m_mapResourceTypes; // 0xc40	
};

