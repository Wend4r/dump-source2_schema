#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct BakedLightingInfo_t
{
public:
	uint32_t m_nLightmapVersionNumber; // 0x0	
	uint32_t m_nLightmapGameVersionNumber; // 0x4	
	Vector2D m_vLightmapUvScale; // 0x8	
	bool m_bHasLightmaps; // 0x10	
	bool m_bBakedShadowsGamma20; // 0x11	
	bool m_bCompressionEnabled; // 0x12	
	bool m_bSHLightmaps; // 0x13	
	uint8_t m_nChartPackIterations; // 0x14	
	uint8_t m_nVradQuality; // 0x15	
private:
	[[maybe_unused]] uint8_t __pad0016[0x2]; // 0x16
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18	
};

