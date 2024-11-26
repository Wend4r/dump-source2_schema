#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1740
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityIntimidateVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1570	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPlayerParticle; // 0x1580	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x1660	
};

