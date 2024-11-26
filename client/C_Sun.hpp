#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c0
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flFarZScale"
class C_Sun : public C_BaseModelEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x860	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0x864	
	float m_fdistNormalize; // 0x868	
	Vector m_vSunPos; // 0x86c	
	// MNetworkEnable
	Vector m_vDirection; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0884[0x4]; // 0x884
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x888	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x890	
	// MNetworkEnable
	Color m_clrOverlay; // 0x898	
	// MNetworkEnable
	bool m_bOn; // 0x89c	
	// MNetworkEnable
	bool m_bmaxColor; // 0x89d	
private:
	[[maybe_unused]] uint8_t __pad089e[0x2]; // 0x89e
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0x8a0	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0x8a4	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x8a8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0x8ac	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x8b0	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x8b4	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x8b8	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x8bc	
};

