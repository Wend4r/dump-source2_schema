#pragma once

#include <cstdint>

struct IncompatibleFilter_t;
struct CCitadelWeaponInfo;
struct ProjectileInfo_t;
struct DeploymentInfo_t;
struct AbilityTooltipDetails_t;
struct CitadelAbilityHUDPanel_t;
struct AdditionalAbilities_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1560
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataOverlayType
class CitadelAbilityVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Meta"
	EAbilityType_t m_eAbilityType; // 0x28	
	// MPropertyStartGroup "Meta"
	EItemSlotTypes_t m_eItemSlotType; // 0x29	
	bool m_bDisabled; // 0x2a	
	bool m_bInDevelopment; // 0x2b	
	bool m_bStartTrained; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	int32_t m_iMaxLevel; // 0x30	
	int32_t m_nAbilityPointsCost; // 0x34	
	int32_t m_nAbillityUnlocksCost; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	uint64_t m_iUpdateTime; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0048[0x4]; // 0x48
public:
	// MPropertyStartGroup "Behavior"
	CBitVecEnum< EAbilityBehavior_t > m_AbilityBehaviorsBits; // 0x4c	
	EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58	
	EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c	
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	float m_flTargetingConeAngle; // 0x60	
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	float m_flTargetingConeHalfWidth; // 0x64	
	// MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	bool m_bIncludeExtra2DCone; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	EAbilityActivation_t m_eAbilityActivation; // 0x6c	
	// MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
	InputBitMask_t m_TriggerButtonPreReqButton; // 0x70	
	// MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
	InputBitMask_t m_TriggerButtonOverride; // 0x78	
	EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	CBitVecEnum< EModifierState > m_bitsInterruptingStates; // 0x84	
	IncompatibleFilter_t m_IncompatibleFilter; // 0x9c	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xb0	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xb4	
	// MPropertyDescription "During post-cast, what modifier states are set."
	CBitVecEnum< EModifierState > m_bitsPostCastEnabledStateMask; // 0xb8	
	// MPropertyDescription "This ability provides these types of ability target effects."
	ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xd0	
	bool m_bShowTargetingPreviewWhileChanneling; // 0xd4	
	bool m_bShowTargetingPreviewWhileCasting; // 0xd5	
private:
	[[maybe_unused]] uint8_t __pad00d6[0x2]; // 0xd6
public:
	// MPropertyStartGroup
	// MPropertyFriendlyName "Weapon Info"
	CCitadelWeaponInfo m_WeaponInfo; // 0xd8	
	// MPropertyFriendlyName "Projectile Info"
	ProjectileInfo_t m_projectileInfo; // 0x758	
	// MPropertyFriendlyName "Deployment Info"
	DeploymentInfo_t m_deploymentInfo; // 0xad8	
	// MPropertyStartGroup
	CUtlOrderedMap< CUtlString, CitadelAbilityProperty_t > m_mapAbilityProperties; // 0xcb8	
	CUtlVector< CSubclassName< 4 > > m_vecDependentAbilities; // 0xce0	
	CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0d10[0x20]; // 0xd10
public:
	// MPropertyStartGroup "AnimGraph"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strCastAnimGraphParam; // 0xd30	
	// MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
	CUtlString m_strSelectionNameOverride; // 0xd38	
	CUtlString m_strCastAnimSequenceName; // 0xd40	
	// MPropertyStartGroup "UI"
	// MPropertySuppressExpr "m_bIsSignatureAbility == false"
	AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xd48	
	CUtlString m_strCSSClass; // 0xd78	
	CPanoramaImageName m_strAbilityImage; // 0xd80	
	CUtlString m_strMoviePreviewPath; // 0xd90	
	CitadelAbilityHUDPanel_t m_HUDPanel; // 0xd98	
	bool m_bShowInPassiveItemsArea; // 0xdd0	
	bool m_bForceShowHUDPanel; // 0xdd1	
	bool m_bUsesFlightControls; // 0xdd2	
private:
	[[maybe_unused]] uint8_t __pad0dd3[0x5]; // 0xdd3
public:
	CUtlString m_strFlyUpLocString; // 0xdd8	
	CUtlString m_strFlyDownLocString; // 0xde0	
	// MPropertyFriendlyName "Additional Abilities"
	AdditionalAbilities_t m_additionalAbilities; // 0xde8	
	CUtlString m_strCancelAbilityKey; // 0xe08	
	CUtlString m_strSecondaryStatName; // 0xe10	
	// MPropertyDescription "Used by button hints as labels for 'casting' (ex. cast, throw, deploy)."
	CUtlString m_strCastButtonLocToken; // 0xe18	
	// MPropertyDescription "Used by button hints as labels for 'alt-casting' (ex. cast on self, bring allies, heal teammate)."
	CUtlString m_strAltCastButtonLocToken; // 0xe20	
	// MPropertyStartGroup "Camera"
	// MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
	CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xe28	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
	bool m_bEndCastStartSequenceOnCastComplete; // 0xeb0	
private:
	[[maybe_unused]] uint8_t __pad0eb1[0x7]; // 0xeb1
public:
	// MPropertyDescription "Camera sequence that plays when casting completes."
	CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xeb8	
	// MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
	CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xf40	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
	bool m_bEndChannelStartSequenceOnChannelComplete; // 0xfc8	
private:
	[[maybe_unused]] uint8_t __pad0fc9[0x3]; // 0xfc9
public:
	float m_flCameraPreviewOffset; // 0xfcc	
	float m_flCameraPreviewDistance; // 0xfd0	
	float m_flCameraPreviewSpeed; // 0xfd4	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Preview particle attaching to the caster before cast"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // 0xfd8	
	// MPropertyDescription "Preview path particle shows ability's custom path"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // 0x10b8	
	// MPropertyDescription "Particle attaching to the caster on cast event"
	CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // 0x1198	
	// MPropertyDescription "Trace particle when hit an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // 0x11c0	
	// MPropertyDescription "Trace particle when missed an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // 0x12a0	
	// MPropertyDescription "Preview particle on attaching to targets of this ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // 0x1380	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSelectedSound; // 0x1460	
	CSoundEventName m_strUnselectedSound; // 0x1470	
	CSoundEventName m_strSelectedLoopSound; // 0x1480	
	CSoundEventName m_strCastSound; // 0x1490	
	CSoundEventName m_strChannelSound; // 0x14a0	
	CSoundEventName m_strChannelLoopSound; // 0x14b0	
	CSoundEventName m_strCastDelaySound; // 0x14c0	
	CSoundEventName m_strCastDelayLoopSound; // 0x14d0	
	// MPropertyDescription "plays for local player attacker dealing damage with this ability"
	CSoundEventName m_strHitConfirmationSound; // 0x14e0	
	// MPropertyDescription "plays for local player victim taking damage from this ability"
	CSoundEventName m_strDamageTakenSound; // 0x14f0	
	CSoundEventName m_strAbilityOffCooldownSound; // 0x1500	
	CSoundEventName m_strAbilityChargeReadySound; // 0x1510	
	bool m_bPlayMeepMop; // 0x1520	
private:
	[[maybe_unused]] uint8_t __pad1521[0x7]; // 0x1521
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // 0x1528	
	CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // 0x1538	
	CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // 0x1548	
};

