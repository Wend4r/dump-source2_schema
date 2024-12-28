#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbb0
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
class C_OmniLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xba0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xba4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xba8	
};

