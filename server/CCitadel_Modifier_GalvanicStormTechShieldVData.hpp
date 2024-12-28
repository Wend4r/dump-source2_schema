#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_GalvanicStormTechShieldVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x640	
	float m_flExplodeSpeed; // 0x720	
};

