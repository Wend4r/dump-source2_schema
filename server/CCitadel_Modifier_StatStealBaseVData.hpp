#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StatStealBaseVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StatStolenDebuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_StatStolenBuffModifier; // 0x640	
};

