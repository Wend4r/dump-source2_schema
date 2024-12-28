#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "Color m_vTintColor"
// MNetworkVarNames "Color m_vTintColorLightingOnly"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nFogType"
// MNetworkVarNames "float m_flFogMinStart"
// MNetworkVarNames "float m_flFogMinEnd"
// MNetworkVarNames "float m_flFogMaxStart"
// MNetworkVarNames "float m_flFogMaxEnd"
// MNetworkVarNames "bool m_bEnabled"
class CEnvSky : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x7b8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0x7c0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x7c8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x7c9	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0x7cd	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0x7d4	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x7d8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x7dc	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x7e0	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x7e4	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x7e8	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x7ec	
};

