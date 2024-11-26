#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class CEnvLightProbeVolume : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0xfe0]; // 0x4e8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x14c8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x14d0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x14d8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x14e0	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x14e8	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x14f4	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1501[0x3]; // 0x1501
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x1504	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1508	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x150c	
private:
	[[maybe_unused]] uint8_t __pad150d[0x3]; // 0x150d
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1510	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1514	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1518	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x151c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1520	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1524	
private:
	[[maybe_unused]] uint8_t __pad1528[0x9]; // 0x1528
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1531	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1528
};

