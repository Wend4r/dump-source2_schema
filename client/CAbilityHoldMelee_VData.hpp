#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHoldMelee_VData : public CAbilityMeleeVData
{
public:
	CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // 0x1590	
	float m_flNextAttackOnParry; // 0x15b8	
	float m_flParryWindow; // 0x15bc	
	float m_flParryStunTime; // 0x15c0	
	float m_flParryCooldown; // 0x15c4	
	CRemapFloat m_AirMeleeUpScale; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // 0x1798	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x1878	
	CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1900	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play when starting the hold"
	CSoundEventName m_strHoldBegin; // 0x1988	
	CSoundEventName m_strSuccessfulParrySound; // 0x1998	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x19a8	
};

