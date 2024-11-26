#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
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
	bool m_bEnabled; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c1[0x7]; // 0x7c1
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x7c8	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x7d0	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x7d8	
	CEntityIOOutput m_CustomOutput0; // 0x7e0	
	CEntityIOOutput m_CustomOutput1; // 0x808	
	CEntityIOOutput m_CustomOutput2; // 0x830	
	CEntityIOOutput m_CustomOutput3; // 0x858	
	CEntityIOOutput m_CustomOutput4; // 0x880	
	CEntityIOOutput m_CustomOutput5; // 0x8a8	
	CEntityIOOutput m_CustomOutput6; // 0x8d0	
	CEntityIOOutput m_CustomOutput7; // 0x8f8	
	CEntityIOOutput m_CustomOutput8; // 0x920	
	CEntityIOOutput m_CustomOutput9; // 0x948	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

