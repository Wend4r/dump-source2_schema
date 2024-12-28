#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1658
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRestorativeGooVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooParticle; // 0x1568	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestorativeGooModifier; // 0x1648	
};

