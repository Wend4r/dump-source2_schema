#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MNetworkVarNames "CUtlString m_targetCamera"
// MNetworkVarNames "int m_nResolutionEnum"
// MNetworkVarNames "bool m_bRenderShadows"
// MNetworkVarNames "bool m_bUseUniqueColorTarget"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "EHANDLE m_hTargetCamera"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bDraw3DSkybox"
class CFuncMonitor : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x7d8	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x7e0	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x7e4	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x7e5	
private:
	[[maybe_unused]] uint8_t __pad07e6[0x2]; // 0x7e6
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x7e8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetCamera; // 0x7f0	
	// MNetworkEnable
	bool m_bEnabled; // 0x7f4	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x7f5	
	bool m_bStartEnabled; // 0x7f6	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetCamera; // 0x0
};

