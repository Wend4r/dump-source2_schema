#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerJumpVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InAirModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_PowerJumpModifier; // 0x1658	
};

