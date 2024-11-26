#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1940
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // 0x1580	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // 0x1830	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ChargeUpSound; // 0x1910	
	CSoundEventName m_OnKillSound; // 0x1920	
	// MPropertyStartGroup "+Killing Blow Params"
	float m_flPreArrivalAttackStartTime; // 0x1930	
	float m_flKillableGlowRange; // 0x1934	
	float m_flGlowMinTime; // 0x1938	
};

