#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "float m_flEndDistance"
// MNetworkVarNames "float m_flStartDistance"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogHeightWidth"
// MNetworkVarNames "float m_flFogHeightEnd"
// MNetworkVarNames "float m_flFogHeightStart"
// MNetworkVarNames "float m_flFogHeightExponent"
// MNetworkVarNames "float m_flLODBias"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "int m_nCubemapSourceType"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "string_t m_iszSkyEntity"
// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
// MNetworkVarNames "bool m_bHasHeightFogEnd"
class C_EnvCubemapFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x560	
	// MNetworkEnable
	float m_flStartDistance; // 0x564	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x568	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x570	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x574	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x578	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x57c	
	// MNetworkEnable
	float m_flLODBias; // 0x580	
	// MNetworkEnable
	bool m_bActive; // 0x584	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x585	
private:
	[[maybe_unused]] uint8_t __pad0586[0x2]; // 0x586
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x588	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x58c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x590	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x598	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x5a0	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x5a8	
	bool m_bFirstTime; // 0x5a9	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

