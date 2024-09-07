#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // 0x1510	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // 0x1520	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // 0x16e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // 0x17c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ChargeUpSound; // 0x18a0	
	CSoundEventName m_OnKillSound; // 0x18b0	
	// MPropertyStartGroup "+Killing Blow Params"
	float m_flPreArrivalAttackStartTime; // 0x18c0	
	float m_flKillableGlowRange; // 0x18c4	
	float m_flGlowMinTime; // 0x18c8	
};
