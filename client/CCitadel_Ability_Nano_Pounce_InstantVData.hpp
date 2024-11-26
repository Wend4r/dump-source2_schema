#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a20
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1580	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1910	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x19f0	
	CSoundEventName m_strExplodeSound; // 0x1a00	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a10	
	float m_flAttackTimePhase02; // 0x1a14	
	float m_flAllyMinTargetRange; // 0x1a18	
	float m_flTargetVerticalOffset; // 0x1a1c	
};

