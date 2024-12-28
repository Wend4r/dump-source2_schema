#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x1568	
	float m_flMovementRestrictionTime; // 0x156c	
	float m_flActiveTime; // 0x1570	
	float m_flParryEndVisualTime; // 0x1574	
	float m_flSuccessActiveTime; // 0x1578	
	float m_flBossVictimNoMeleeTime; // 0x157c	
	float m_flBossVictimCalmTime; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1584[0x4]; // 0x1584
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParryParticle; // 0x1668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x1748	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x1758	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1768	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x1778	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x1788	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // 0x1798	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // 0x17a8	
};

