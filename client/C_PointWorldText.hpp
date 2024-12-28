#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "char m_BackgroundMaterialName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "bool m_bDrawBackground"
// MNetworkVarNames "float m_flBackgroundBorderWidth"
// MNetworkVarNames "float m_flBackgroundBorderHeight"
// MNetworkVarNames "float m_flBackgroundWorldToUV"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0858[0x8]; // 0x858
public:
	bool m_bForceRecreateNextUpdate; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0861[0x17]; // 0x861
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x878	
	// MNetworkEnable
	char m_FontName[64]; // 0xa78	
	// MNetworkEnable
	char m_BackgroundMaterialName[64]; // 0xab8	
	// MNetworkEnable
	bool m_bEnabled; // 0xaf8	
	// MNetworkEnable
	bool m_bFullbright; // 0xaf9	
private:
	[[maybe_unused]] uint8_t __pad0afa[0x2]; // 0xafa
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xafc	
	// MNetworkEnable
	float m_flFontSize; // 0xb00	
	// MNetworkEnable
	float m_flDepthOffset; // 0xb04	
	// MNetworkEnable
	bool m_bDrawBackground; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b09[0x3]; // 0xb09
public:
	// MNetworkEnable
	float m_flBackgroundBorderWidth; // 0xb0c	
	// MNetworkEnable
	float m_flBackgroundBorderHeight; // 0xb10	
	// MNetworkEnable
	float m_flBackgroundWorldToUV; // 0xb14	
	// MNetworkEnable
	Color m_Color; // 0xb18	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xb1c	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xb20	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xb24	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

