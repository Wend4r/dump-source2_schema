#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x708
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x608	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x618	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6f8	
};

