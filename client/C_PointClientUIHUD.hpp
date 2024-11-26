#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
class C_PointClientUIHUD : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0890[0x8]; // 0x890
public:
	bool m_bCheckCSSClasses; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x17f]; // 0x899
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xa18	
private:
	[[maybe_unused]] uint8_t __pad0a19[0x3]; // 0xa19
public:
	// MNetworkEnable
	float m_flWidth; // 0xa1c	
	// MNetworkEnable
	float m_flHeight; // 0xa20	
	// MNetworkEnable
	float m_flDPI; // 0xa24	
	// MNetworkEnable
	float m_flInteractDistance; // 0xa28	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa2c	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xa30	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xa34	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xa38	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xa3c	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xa40	
private:
	[[maybe_unused]] uint8_t __pad0a41[0x7]; // 0xa41
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xa48	
};

