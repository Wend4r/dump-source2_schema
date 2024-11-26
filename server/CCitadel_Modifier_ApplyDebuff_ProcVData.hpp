#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ApplyDebuff_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	bool m_bUseNonEmbedded; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad0639[0x7]; // 0x639
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x640	
	CSubclassName< 2 > m_NonEmbeddedModifier; // 0x650	
};

