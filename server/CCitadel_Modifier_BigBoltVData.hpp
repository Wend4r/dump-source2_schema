#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BigBoltVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x608	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x618	
	float m_flModelScale; // 0x6f8	
};

