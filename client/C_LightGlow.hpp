#pragma once

#include <cstdint>

struct C_LightGlowOverlay;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x970
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
class C_LightGlow : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0x858	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0x85c	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0x860	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0x864	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0x868	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x86c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	// MNetworkChangeCallback "OnHDRColorScaleChanged"
	float m_flHDRColorScale; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0874[0x4]; // 0x874
public:
	C_LightGlowOverlay m_GlowOverlay; // 0x878	
};

