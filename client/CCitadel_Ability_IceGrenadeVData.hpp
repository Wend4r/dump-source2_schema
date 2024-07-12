#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IceGrenadeSlowModifier; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x15d0	
};
