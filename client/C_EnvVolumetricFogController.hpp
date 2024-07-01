#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nIndirectTextureDimX"
// MNetworkVarNames "int m_nIndirectTextureDimY"
// MNetworkVarNames "int m_nIndirectTextureDimZ"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartAnisoTime"
// MNetworkVarNames "GameTime_t m_flStartScatterTime"
// MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
// MNetworkVarNames "float m_flStartAnisotropy"
// MNetworkVarNames "float m_flStartScattering"
// MNetworkVarNames "float m_flStartDrawDistance"
// MNetworkVarNames "float m_flDefaultAnisotropy"
// MNetworkVarNames "float m_flDefaultScattering"
// MNetworkVarNames "float m_flDefaultDrawDistance"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnableIndirect"
// MNetworkVarNames "bool m_bIndirectUseLPVs"
// MNetworkVarNames "bool m_bIsMaster"
// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
// MNetworkVarNames "int m_nForceRefreshCount"
// MNetworkVarNames "float m_fNoiseSpeed"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "Vector m_vNoiseScale"
class C_EnvVolumetricFogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x538	
	// MNetworkEnable
	float m_flAnisotropy; // 0x53c	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x540	
	// MNetworkEnable
	float m_flDrawDistance; // 0x544	
	// MNetworkEnable
	float m_flFadeInStart; // 0x548	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x54c	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x550	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x554	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x558	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x55c	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x560	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x56c	
	// MNetworkEnable
	bool m_bActive; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0579[0x3]; // 0x579
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x57c	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x580	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x584	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x588	
	// MNetworkEnable
	float m_flStartScattering; // 0x58c	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x590	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x594	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x598	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x59c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5a0	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x5a1	
	// MNetworkEnable
	bool m_bIndirectUseLPVs; // 0x5a2	
	// MNetworkEnable
	bool m_bIsMaster; // 0x5a3	
private:
	[[maybe_unused]] uint8_t __pad05a4[0x4]; // 0x5a4
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5a8	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x5b0	
	// MNetworkEnable
	float m_fNoiseSpeed; // 0x5b4	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x5b8	
	// MNetworkEnable
	Vector m_vNoiseScale; // 0x5bc	
	bool m_bFirstTime; // 0x5c8	
	
	// Datamap fields:
	// void InputSetToDefaults; // 0x0
	// float InputSetScattering; // 0x0
	// float InputSetAnisotropy; // 0x0
	// float InputSetFadeSpeed; // 0x0
	// float InputSetDrawDistance; // 0x0
	// bool EnableIndirect; // 0x0
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// void ForceRefresh; // 0x0
};

