#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9b0
// Has VTable
// 
// MNetworkVarNames "Vector m_vLaunchTarget"
// MNetworkVarNames "float m_flLaunchSpeed"
class CCitadelCatapultTrigger : public C_BaseTrigger
{
public:
	// MNetworkEnable
	Vector m_vLaunchTarget; // 0x998	
	// MNetworkEnable
	float m_flLaunchSpeed; // 0x9a4	
	CUtlSymbolLarge m_nameTarget; // 0x9a8	
};

