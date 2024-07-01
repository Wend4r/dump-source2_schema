#pragma once

#include <cstdint>

struct DOFDesc_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1da8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	float m_flMinButtonHoldTimeToActivate; // 0x14e0	
	float m_flCrouchDropSpeedFraction; // 0x14e4	
	float m_flCrouchDropAirDragSuppressDuration; // 0x14e8	
	float m_flDetachDisallowedTime; // 0x14ec	
	float m_flCameraWobbleIntensity; // 0x14f0	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x14f4	
private:
	[[maybe_unused]] uint8_t __pad1504[0x4]; // 0x1504
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x1888	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1968	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1a48	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1b28	
	CSoundEventName m_strZipLineLatchedSound; // 0x1b38	
	CSoundEventName m_strZipLineStartSound; // 0x1b48	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1b58	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1b68	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1b78	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1b88	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1b98	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1ba8	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1c28	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1ca8	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1d28	
};

