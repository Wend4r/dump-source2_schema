#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "Color m_Entity_Color"
// MNetworkVarNames "float m_Entity_flBrightness"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class CEnvCombinedLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x1060]; // 0x4e8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x1548	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x154c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x1550	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x1558	
private:
	[[maybe_unused]] uint8_t __pad1559[0x7]; // 0x1559
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1560	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1568	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1570	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1578	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1580	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x158c	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1598	
private:
	[[maybe_unused]] uint8_t __pad1599[0x3]; // 0x1599
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x159c	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15a0	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x15a4	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15a9[0x3]; // 0x15a9
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x15ac	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x15b0	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x15bc	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x15c0	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x15c4	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x15c8	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x15cc	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x15d0	
private:
	[[maybe_unused]] uint8_t __pad15d4[0x15]; // 0x15d4
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x15e9	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x15d8
	// void m_Entity_pLightProbeVolume; // 0x15e0
};

