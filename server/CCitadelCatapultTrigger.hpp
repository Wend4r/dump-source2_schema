#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MNetworkVarNames "Vector m_vLaunchTarget"
// MNetworkVarNames "float m_flLaunchSpeed"
class CCitadelCatapultTrigger : public CBaseTrigger
{
public:
	// MNetworkEnable
	Vector m_vLaunchTarget; // 0x980	
	// MNetworkEnable
	float m_flLaunchSpeed; // 0x98c	
	CUtlSymbolLarge m_nameTarget; // 0x990	
};

