#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Gunslinger_DemonMarkVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcEffect; // 0x630	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x710	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x720	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CasterMarkTriggerSound; // 0x730	
	CSoundEventName m_VictimMarkTriggerSound; // 0x740	
};

