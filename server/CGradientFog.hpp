#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
// MNetworkVarNames "float m_flFogStartDistance"
// MNetworkVarNames "float m_flFogEndDistance"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogStartHeight"
// MNetworkVarNames "float m_flFogEndHeight"
// MNetworkVarNames "float m_flFarZ"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "float m_flFogVerticalExponent"
// MNetworkVarNames "Color m_fogColor"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class CGradientFog : public CBaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x4c0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x4c8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x4cc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x4d4	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x4d8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x4dc	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x4e0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x4e4	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x4e8	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x4ec	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x4f0	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x4f4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4f8	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x4f9	
	bool m_bGradientFogNeedsTextures; // 0x4fa	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetFogStartDistance; // 0x0
	// float InputSetFogEndDistance; // 0x0
	// float InputSetFogStartHeight; // 0x0
	// float InputSetFogEndHeight; // 0x0
	// float InputSetFogMaxOpacity; // 0x0
	// float InputSetFogFalloffExponent; // 0x0
	// float InputSetFogVerticalExponent; // 0x0
	// Color InputSetFogColor; // 0x0
	// float InputSetFogStrength; // 0x0
	// float InputSetFarZ; // 0x0
};
