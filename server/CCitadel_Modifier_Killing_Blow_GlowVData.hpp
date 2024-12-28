#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Killing_Blow_GlowVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShivOnlyDeathStatus; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShivOnlyDeathTrail; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strShivOnlyActivateSound; // 0x7f0	
	CSoundEventName m_strShivOnlyLoopSound; // 0x800	
};

