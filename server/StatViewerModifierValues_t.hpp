#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_SourceModifierID"
// MNetworkVarNames "EModifierValue m_eValType"
// MNetworkVarNames "float m_flValue"
struct StatViewerModifierValues_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_SourceModifierID; // 0x30	
	// MNetworkEnable
	EModifierValue m_eValType; // 0x34	
	// MNetworkEnable
	float m_flValue; // 0x38	
};
