#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae8
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
class COmniLight : public CBarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xad8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xadc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xae0	
};

