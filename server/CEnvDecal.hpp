#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDepth"
// MNetworkVarNames "uint32 m_nRenderOrder"
// MNetworkVarNames "bool m_bProjectOnWorld"
// MNetworkVarNames "bool m_bProjectOnCharacters"
// MNetworkVarNames "bool m_bProjectOnWater"
// MNetworkVarNames "float m_flDepthSortBias"
class CEnvDecal : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x7b8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x7c0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x7c4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x7c8	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x7cc	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x7d0	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x7d1	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x7d2	
private:
	[[maybe_unused]] uint8_t __pad07d3[0x1]; // 0x7d3
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x7d4	
};

