#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a30
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_Pounce_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1580	
	CEmbeddedSubclass< CCitadelModifier > m_DoublePounceModifier; // 0x1590	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x15a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x1680	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1760	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x1840	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // 0x1920	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AttackSound; // 0x1a00	
	CSoundEventName m_strExplodeSound; // 0x1a10	
	// MPropertyStartGroup "Gameplay"
	float m_flAttackTimePhase01; // 0x1a20	
	float m_flAttackTimePhase02; // 0x1a24	
	float m_flAllyMinTargetRange; // 0x1a28	
	float m_flTargetVerticalOffset; // 0x1a2c	
};

