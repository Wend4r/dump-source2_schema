#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a38
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1588	
	CEmbeddedSubclass< CCitadelModifier > m_DoublePounceModifier; // 0x1598	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x15a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x1688	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1768	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1848	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1928	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x1a08	
	CSoundEventName m_strExplodeSound; // 0x1a18	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a28	
	float m_flAttackTimePhase02; // 0x1a2c	
	float m_flAllyMinTargetRange; // 0x1a30	
	float m_flTargetVerticalOffset; // 0x1a34	
};

