#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // 0x630	
	float m_flDesatAmount; // 0x710	
	Color m_DesatTint; // 0x714	
	Color m_SatTint; // 0x718	
	Color m_Outline; // 0x71c	
};

