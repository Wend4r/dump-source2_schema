#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1948
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1598	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x1758	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // 0x1838	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ChargeUpSound; // 0x1918	
	CSoundEventName m_OnKillSound; // 0x1928	
	// MPropertyStartGroup "+Killing Blow Params"
	float m_flPreArrivalAttackStartTime; // 0x1938	
	float m_flKillableGlowRange; // 0x193c	
	float m_flGlowMinTime; // 0x1940	
};

