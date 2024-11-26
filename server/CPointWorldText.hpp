#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa70
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
class CPointWorldText : public CModelPointEntity
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x7c0	
	// MNetworkEnable
	char m_FontName[64]; // 0x9c0	
	// MNetworkEnable
	char m_BackgroundMaterialName[64]; // 0xa00	
	// MNetworkEnable
	bool m_bEnabled; // 0xa40	
	// MNetworkEnable
	bool m_bFullbright; // 0xa41	
private:
	[[maybe_unused]] uint8_t __pad0a42[0x2]; // 0xa42
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xa44	
	// MNetworkEnable
	float m_flFontSize; // 0xa48	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa4c	
	// MNetworkEnable
	bool m_bDrawBackground; // 0xa50	
private:
	[[maybe_unused]] uint8_t __pad0a51[0x3]; // 0xa51
public:
	// MNetworkEnable
	float m_flBackgroundBorderWidth; // 0xa54	
	// MNetworkEnable
	float m_flBackgroundBorderHeight; // 0xa58	
	// MNetworkEnable
	float m_flBackgroundWorldToUV; // 0xa5c	
	// MNetworkEnable
	Color m_Color; // 0xa60	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa64	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa68	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xa6c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

