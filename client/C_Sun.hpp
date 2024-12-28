#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b8
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
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x858	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0x85c	
	float m_fdistNormalize; // 0x860	
	Vector m_vSunPos; // 0x864	
	// MNetworkEnable
	Vector m_vDirection; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x880	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x888	
	// MNetworkEnable
	Color m_clrOverlay; // 0x890	
	// MNetworkEnable
	bool m_bOn; // 0x894	
	// MNetworkEnable
	bool m_bmaxColor; // 0x895	
private:
	[[maybe_unused]] uint8_t __pad0896[0x2]; // 0x896
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0x898	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0x89c	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x8a0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0x8a4	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x8a8	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x8ac	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x8b0	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x8b4	
};

