#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IceGrenadeSlowModifier; // 0x1640	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1650	
};

