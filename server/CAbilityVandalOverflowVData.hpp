#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1660
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVandalOverflowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x1560	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x1570	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetCastSound; // 0x1650	
};

