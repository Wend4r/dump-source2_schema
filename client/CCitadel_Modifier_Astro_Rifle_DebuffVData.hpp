#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Astro_Rifle_DebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x630	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTargetHitSound; // 0x640	
};

