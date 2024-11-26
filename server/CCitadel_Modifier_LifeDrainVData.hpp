#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LifeDrainVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x608	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x618	
};

