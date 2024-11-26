#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "uint32 m_nHorizontalSize"
// MNetworkVarNames "uint32 m_nVerticalSize"
// MNetworkVarNames "uint32 m_nMinDist"
// MNetworkVarNames "uint32 m_nMaxDist"
// MNetworkVarNames "uint32 m_nOuterMaxDist"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class CLightGlow : public CBaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0x7c0	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0x7c4	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0x7c8	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0x7cc	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0x7d0	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x7d4	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x7d8	
	
	// Datamap fields:
	// Color InputColor; // 0x0
};

