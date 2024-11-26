#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x1560	
	float m_flMovementRestrictionTime; // 0x1564	
	float m_flActiveTime; // 0x1568	
	float m_flParryEndVisualTime; // 0x156c	
	float m_flSuccessActiveTime; // 0x1570	
	float m_flBossVictimNoMeleeTime; // 0x1574	
	float m_flBossVictimCalmTime; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad157c[0x4]; // 0x157c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x1580	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x1660	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x1670	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimNoMeleeModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_ParryBossVictimCalmModifier; // 0x16c0	
};

