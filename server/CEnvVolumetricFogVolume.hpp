#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
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
class CEnvVolumetricFogVolume : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4ec	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4f8	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	// MNetworkEnable
	float m_flStrength; // 0x508	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x50c	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x510	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x514	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x518	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x51c	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x520	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x524	
	// MNetworkEnable
	Color m_TintColor; // 0x528	
	// MNetworkEnable
	bool m_bOverrideTintColor; // 0x52c	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x52d	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x52e	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x52f	
	// MNetworkEnable
	bool m_bAllowLPVIndirect; // 0x530	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

