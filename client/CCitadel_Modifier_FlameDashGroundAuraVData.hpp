#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x760
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FlameDashGroundAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x678	
	// MPropertyStartGroup "Gameplay"
	float m_flHeight; // 0x758	
};

