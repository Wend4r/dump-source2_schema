#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x808
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flFarZScale"
class CSun : public CBaseModelEntity
{
public:
	// MNetworkEnable
	Vector m_vDirection; // 0x7c0	
	// MNetworkEnable
	Color m_clrOverlay; // 0x7cc	
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x7d0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x7d8	
	// MNetworkEnable
	bool m_bOn; // 0x7e0	
	// MNetworkEnable
	bool m_bmaxColor; // 0x7e1	
private:
	[[maybe_unused]] uint8_t __pad07e2[0x2]; // 0x7e2
public:
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flSize; // 0x7e4	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x7e8	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHazeScale; // 0x7ec	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x7f0	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x7f4	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x7f8	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_flHDRColorScale; // 0x7fc	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x800	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
};

