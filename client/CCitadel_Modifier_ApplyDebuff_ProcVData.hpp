#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ApplyDebuff_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	bool m_bUseNonEmbedded; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad0661[0x7]; // 0x661
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x668	
	CSubclassName< 2 > m_NonEmbeddedModifier; // 0x678	
};

