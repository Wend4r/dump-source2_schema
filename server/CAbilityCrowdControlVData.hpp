#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCrowdControlVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1568	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1658	
};

