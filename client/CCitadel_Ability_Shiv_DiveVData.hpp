#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1950
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_DiveVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPossessSound; // 0x14e0	
	CSoundEventName m_strPossessStartSound; // 0x14f0	
	CSoundEventName m_strPossessEndExplodeSound; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PossessStartParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PossessParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x17b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShivPossessingModifier; // 0x1890	
	CEmbeddedSubclass< CCitadelModifier > m_TargetPossessedModifier; // 0x18a0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequencePossessStart; // 0x18b0	
	// MPropertyStartGroup "+Possession Properties"
	Vector m_vPossessionEndOffset; // 0x1930	
	float m_flPossessionPreAnimDuration; // 0x193c	
	float m_flPossessionPostAnimDuration; // 0x1940	
	float m_flVertialLocalOffset; // 0x1944	
	float m_flPossessEndVerticalSpeed; // 0x1948	
	float m_flPossessEndBusyTime; // 0x194c	
};
