#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechBleed_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BleedModifier; // 0x620	
};
