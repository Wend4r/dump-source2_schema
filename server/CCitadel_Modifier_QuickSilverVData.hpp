#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_QuickSilverVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x610	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x620	
};

