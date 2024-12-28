#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SmokeBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_PhaseOutModifier; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x1598	
};

