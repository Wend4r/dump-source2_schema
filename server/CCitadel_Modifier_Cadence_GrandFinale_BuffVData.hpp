#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x5e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6d0	
};

