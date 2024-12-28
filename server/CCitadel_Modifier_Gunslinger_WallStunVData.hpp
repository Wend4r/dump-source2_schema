#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Gunslinger_WallStunVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcEffect; // 0x630	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CasterMarkTriggerSound; // 0x720	
};

