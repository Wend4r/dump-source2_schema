#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SleepDaggerAsleepVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // 0x6d8	
};

