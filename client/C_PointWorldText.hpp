#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xff8
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
	[[maybe_unused]] uint8_t __pad0d28[0x8]; // 0xd28
public:
	bool m_bForceRecreateNextUpdate; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0x17]; // 0xd31
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xd48	
	// MNetworkEnable
	char m_FontName[64]; // 0xf48	
	// MNetworkEnable
	char m_BackgroundMaterialName[64]; // 0xf88	
	// MNetworkEnable
	bool m_bEnabled; // 0xfc8	
	// MNetworkEnable
	bool m_bFullbright; // 0xfc9	
private:
	[[maybe_unused]] uint8_t __pad0fca[0x2]; // 0xfca
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xfcc	
	// MNetworkEnable
	float m_flFontSize; // 0xfd0	
	// MNetworkEnable
	float m_flDepthOffset; // 0xfd4	
	// MNetworkEnable
	bool m_bDrawBackground; // 0xfd8	
private:
	[[maybe_unused]] uint8_t __pad0fd9[0x3]; // 0xfd9
public:
	// MNetworkEnable
	float m_flBackgroundBorderWidth; // 0xfdc	
	// MNetworkEnable
	float m_flBackgroundBorderHeight; // 0xfe0	
	// MNetworkEnable
	float m_flBackgroundWorldToUV; // 0xfe4	
	// MNetworkEnable
	Color m_Color; // 0xfe8	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xfec	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xff0	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xff4	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

