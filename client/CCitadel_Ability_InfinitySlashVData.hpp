#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flRiseSpeed; // 0x1568	
	float m_flRiseDuration; // 0x156c	
	float m_flSpeedDecayScale; // 0x1570	
	float m_flExplodeHoldTime; // 0x1574	
	float m_flExplosionShakeAmplitude; // 0x1578	
	float m_flExplosionShakeFrequency; // 0x157c	
	float m_flExplosionShakeDuration; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1584[0x4]; // 0x1584
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // 0x1668	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1748	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x17d0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // 0x17e0	
};

