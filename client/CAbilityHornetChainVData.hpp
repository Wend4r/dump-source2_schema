#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetChainVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1568	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1648	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x1658	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x1668	
};

