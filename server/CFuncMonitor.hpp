#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x800
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
	CUtlString m_targetCamera; // 0x7e0	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x7e8	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x7ec	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x7ed	
private:
	[[maybe_unused]] uint8_t __pad07ee[0x2]; // 0x7ee
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x7f0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetCamera; // 0x7f8	
	// MNetworkEnable
	bool m_bEnabled; // 0x7fc	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x7fd	
	bool m_bStartEnabled; // 0x7fe	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetCamera; // 0x0
};

