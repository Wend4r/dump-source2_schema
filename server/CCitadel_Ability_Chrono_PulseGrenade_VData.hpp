#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // 0x1560	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x1570	
	// MPropertyStartGroup "Misc"
	CUtlString m_strDebuffStatName; // 0x1580	
};

