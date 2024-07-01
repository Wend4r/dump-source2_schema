#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "float m_Entity_flInfluenceRadius"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "float m_Entity_flDiffuseScale"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
// MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
// MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
// MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvCubemap : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x80]; // 0x538
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x5b8	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x3]; // 0x5c1
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x5c4	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x5c8	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x5d4	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e1[0x3]; // 0x5e1
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x5e4	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x5e8	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x5ec	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x5f0	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x5f4	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x600	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x604	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x605	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x606	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x607	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad0609[0xf]; // 0x609
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x618	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x610
};

