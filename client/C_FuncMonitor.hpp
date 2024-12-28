#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xd10
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
class C_FuncMonitor : public C_FuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x858	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x860	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x864	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x865	
private:
	[[maybe_unused]] uint8_t __pad0866[0x2]; // 0x866
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x868	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0x870	
	// MNetworkEnable
	bool m_bEnabled; // 0x874	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x875	
};

