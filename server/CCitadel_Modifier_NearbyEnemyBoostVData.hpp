#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyBoostVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x630	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x640	
};

