#pragma once

#include <cstdint>

struct DOFDesc_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f28
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
	float m_flZiplineAirDrag; // 0x1560	
	float m_flMinButtonHoldTimeToActivate; // 0x1564	
	float m_flCrouchDropSpeedFraction; // 0x1568	
	float m_flCrouchDropAirDragSuppressDuration; // 0x156c	
	float m_flDetachDisallowedTime; // 0x1570	
	float m_flCameraWobbleIntensity; // 0x1574	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x1668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x1748	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x1828	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // 0x1908	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x19e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1ac8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1ba8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1c88	
	CSoundEventName m_strZipLineLatchedSound; // 0x1c98	
	CSoundEventName m_strZipLineStartSound; // 0x1ca8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1cb8	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1cc8	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1cd8	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1ce8	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1cf8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1d08	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1d90	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1e18	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1ea0	
};

