#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class C_BaseClientUIEntity : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0860[0x8]; // 0x860
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x7]; // 0x869
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x870	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x878	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x880	
};

