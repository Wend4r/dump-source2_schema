#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechBleed_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BleedModifier; // 0x638	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x648	
};

