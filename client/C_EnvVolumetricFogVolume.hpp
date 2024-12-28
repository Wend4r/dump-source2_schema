#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
// MNetworkVarNames "float m_flHeightFogDepth"
// MNetworkVarNames "float m_fHeightFogEdgeWidth"
// MNetworkVarNames "float m_fIndirectLightStrength"
// MNetworkVarNames "float m_fSunLightStrength"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "Color m_TintColor"
// MNetworkVarNames "bool m_bOverrideTintColor"
// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
// MNetworkVarNames "bool m_bOverrideSunLightStrength"
// MNetworkVarNames "bool m_bOverrideNoiseStrength"
// MNetworkVarNames "bool m_bAllowLPVIndirect"
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x564	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x570	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x57c	
private:
	[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
public:
	// MNetworkEnable
	float m_flStrength; // 0x580	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x584	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x588	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x58c	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x590	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x594	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x598	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x59c	
	// MNetworkEnable
	Color m_TintColor; // 0x5a0	
	// MNetworkEnable
	bool m_bOverrideTintColor; // 0x5a4	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x5a5	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x5a6	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x5a7	
	// MNetworkEnable
	bool m_bAllowLPVIndirect; // 0x5a8	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

