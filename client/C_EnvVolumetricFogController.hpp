#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "Color m_TintColor"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nVolumeDepth"
// MNetworkVarNames "float m_fFirstVolumeSliceThickness"
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
// MNetworkVarNames "float m_fWindSpeed"
// MNetworkVarNames "Vector m_vWindDirection"
class C_EnvVolumetricFogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x560	
	// MNetworkEnable
	Color m_TintColor; // 0x564	
	// MNetworkEnable
	float m_flAnisotropy; // 0x568	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x56c	
	// MNetworkEnable
	float m_flDrawDistance; // 0x570	
	// MNetworkEnable
	float m_flFadeInStart; // 0x574	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x578	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x57c	
	// MNetworkEnable
	int32_t m_nVolumeDepth; // 0x580	
	// MNetworkEnable
	float m_fFirstVolumeSliceThickness; // 0x584	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x588	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x58c	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x590	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x594	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x5a0	
	// MNetworkEnable
	bool m_bActive; // 0x5ac	
private:
	[[maybe_unused]] uint8_t __pad05ad[0x3]; // 0x5ad
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x5b0	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x5b4	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x5b8	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x5bc	
	// MNetworkEnable
	float m_flStartScattering; // 0x5c0	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x5c4	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x5c8	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x5cc	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x5d0	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5d4	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x5d5	
	// MNetworkEnable
	bool m_bIndirectUseLPVs; // 0x5d6	
	// MNetworkEnable
	bool m_bIsMaster; // 0x5d7	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5d8	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x5e0	
	// MNetworkEnable
	float m_fNoiseSpeed; // 0x5e4	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x5e8	
	// MNetworkEnable
	Vector m_vNoiseScale; // 0x5ec	
	// MNetworkEnable
	float m_fWindSpeed; // 0x5f8	
	// MNetworkEnable
	Vector m_vWindDirection; // 0x5fc	
	bool m_bFirstTime; // 0x608	
	
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

