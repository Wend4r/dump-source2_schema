#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PristineEmblem_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x608	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParticleModifier; // 0x6e8	
};

