#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a28
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1758	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1838	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1918	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x19f8	
	CSoundEventName m_strExplodeSound; // 0x1a08	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a18	
	float m_flAttackTimePhase02; // 0x1a1c	
	float m_flAllyMinTargetRange; // 0x1a20	
	float m_flTargetVerticalOffset; // 0x1a24	
};

