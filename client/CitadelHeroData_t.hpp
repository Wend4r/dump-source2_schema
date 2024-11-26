#pragma once

#include <cstdint>

struct HeroID_t;
struct HeroStatsUI_t;
struct HeroStatsDisplay_t;
struct CitadelStatsDisplay_t;
struct CFootstepTableHandle;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataAssociatedFile
// MVDataOverlayType
struct CitadelHeroData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< HeroAnimGraphDefaultValueOverride_t > m_vecAnimGraphDefaultValueOverrides; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	HeroID_t m_HeroID; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyStartGroup "Screen Space Particle FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDamageTakenParticle; // 0x30	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hGroundDamageTakenParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDeathParticle; // 0x1f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hLowHealthParticle; // 0x2d0	
	// MPropertyStartGroup "Visuals"
	CPanoramaImageName m_strSelectionImage; // 0x3b0	
	CPanoramaImageName m_strIconImageSmall; // 0x3c0	
	CPanoramaImageName m_strIconHeroCard; // 0x3d0	
	CPanoramaImageName m_strMinimapImage; // 0x3e0	
	CPanoramaImageName m_strTopBarImage; // 0x3f0	
	CPanoramaImageName m_strTopBarVertical; // 0x400	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hRespawnParticle; // 0x410	
	Color m_colorUI; // 0x4f0	
	Color m_colorGlowFriendly; // 0x4f4	
	Color m_colorGlowEnemy; // 0x4f8	
	Color m_colorGlowTeam1; // 0x4fc	
	Color m_colorGlowTeam2; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strModelName; // 0x508	
	int32_t m_nModelSkin; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	// MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x5f0	
	// MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strMainOnlyModelName; // 0x6d0	
	// MPropertyStartGroup "UI"
	// MPropertyDescription "AnimGraph for UI"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphVariation > > m_sAG2VariationName; // 0x7b0	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIPortraitMap; // 0x890	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIShoppingMap; // 0x898	
	HeroStatsUI_t m_heroStatsUI; // 0x8a0	
	HeroStatsDisplay_t m_heroStatsDisplay; // 0x8d0	
	CitadelStatsDisplay_t m_ShopStatDisplay; // 0x960	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDeathSound; // 0xa08	
	CSoundEventName m_strLastHitSound; // 0xa18	
	CSoundEventName m_strRosterSelectedSound; // 0xa28	
	CSoundEventName m_strRosterRemovedSound; // 0xa38	
	CSoundEventName m_strFootstepSoundEventDefault; // 0xa48	
	CSoundEventName m_strLowHealthSound; // 0xa58	
	CSoundEventName m_strHeroSpecificLowHealthSound; // 0xa68	
	CSoundEventName m_strMovementLoop; // 0xa78	
	// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
	CFootstepTableHandle m_hFootstepSounds; // 0xa88	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // 0xa90	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // 0xb70	
	float m_flFootstepSoundTravelDistanceMeters; // 0xc50	
	float m_flStealthSpeedMetersPerSecond; // 0xc54	
	float m_flStepSoundTime; // 0xc58	
	float m_flStepSoundTimeSprinting; // 0xc5c	
	// MPropertyStartGroup
	float m_flCollisionRadius; // 0xc60	
	float m_flCollisionHeight; // 0xc64	
	float m_flStepHeight; // 0xc68	
	bool m_bInDevelopment; // 0xc6c	
	bool m_bAssignedPlayersOnly; // 0xc6d	
	bool m_bBotSelectable; // 0xc6e	
	bool m_bNewPlayerRecommended; // 0xc6f	
	bool m_bLaneTestingRecommended; // 0xc70	
	bool m_bNeedsTesting; // 0xc71	
	bool m_bLimitedTesting; // 0xc72	
	bool m_bDisabled; // 0xc73	
	bool m_bPlayerSelectable; // 0xc74	
	bool m_bAvailableInHeroLabs; // 0xc75	
private:
	[[maybe_unused]] uint8_t __pad0c76[0x2]; // 0xc76
public:
	int32_t m_nComplexity; // 0xc78	
	int32_t m_nReadability; // 0xc7c	
	// MPropertyStartGroup "Low Health Settings"
	// MPropertyDescription "Percentage of health to be considered low health"
	// MPropertyAttributeRange "0 1"
	float m_flMinLowHealthPercentage; // 0xc80	
	// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxLowHealthPercentage; // 0xc84	
	// MPropertyDescription "Percentage of health to be considered mid health"
	// MPropertyAttributeRange "0 1"
	float m_flMinMidHealthPercentage; // 0xc88	
	// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxMidHealthPercentage; // 0xc8c	
	// MPropertyDescription "Min Max Health for Remapped Value"
	float m_flMinHealthForThreshold; // 0xc90	
	// MPropertyDescription "Max Max Health for remapped value"
	float m_flMaxHealthForThreshold; // 0xc94	
	// MPropertyStartGroup
	CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // 0xc98	
	CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0ce8[0x18]; // 0xce8
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0xd00	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // 0xd28	
	CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // 0xd50	
	CUtlVector< CSubclassName< 4 > > m_RecommendedUpgrades; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d90[0x70]; // 0xd90
public:
	CUtlVector< CSubclassName< 4 > > m_RecommendedAbilityOrder; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e18[0x18]; // 0xe18
public:
	EAbilityResourceType m_eAbilityResourceType; // 0xe30	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x1c]; // 0xe34
public:
	CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // 0xe50	
	CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // 0xe78	
	CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // 0xea0	
};

