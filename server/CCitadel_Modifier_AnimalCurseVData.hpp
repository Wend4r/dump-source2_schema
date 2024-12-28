#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AnimalCurseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_CursedModel; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x710	
	// MPropertyStartGroup "+Properties"
	float m_flModelScale; // 0x7f0	
};

