#pragma once

#include <cstdint>

struct DOFDesc_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f30
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
	float m_flZiplineAirDrag; // 0x1568	
	float m_flMinButtonHoldTimeToActivate; // 0x156c	
	float m_flCrouchDropSpeedFraction; // 0x1570	
	float m_flCrouchDropAirDragSuppressDuration; // 0x1574	
	float m_flDetachDisallowedTime; // 0x1578	
	float m_flCameraWobbleIntensity; // 0x157c	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x1580	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // 0x1910	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x19f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1ad0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1bb0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1c90	
	CSoundEventName m_strZipLineLatchedSound; // 0x1ca0	
	CSoundEventName m_strZipLineStartSound; // 0x1cb0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1cc0	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1cd0	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1ce0	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1cf0	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1d00	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1d10	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1d98	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1e20	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1ea8	
};

