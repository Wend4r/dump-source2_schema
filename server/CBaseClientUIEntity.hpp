#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class CBaseClientUIEntity : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07b9[0x7]; // 0x7b9
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x7c0	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x7c8	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x7d0	
	CEntityIOOutput m_CustomOutput0; // 0x7d8	
	CEntityIOOutput m_CustomOutput1; // 0x800	
	CEntityIOOutput m_CustomOutput2; // 0x828	
	CEntityIOOutput m_CustomOutput3; // 0x850	
	CEntityIOOutput m_CustomOutput4; // 0x878	
	CEntityIOOutput m_CustomOutput5; // 0x8a0	
	CEntityIOOutput m_CustomOutput6; // 0x8c8	
	CEntityIOOutput m_CustomOutput7; // 0x8f0	
	CEntityIOOutput m_CustomOutput8; // 0x918	
	CEntityIOOutput m_CustomOutput9; // 0x940	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

