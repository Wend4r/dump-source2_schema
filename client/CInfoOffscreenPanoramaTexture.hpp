#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public C_PointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x564	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x4]; // 0x56c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x570	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x578	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x580	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad059c[0x4]; // 0x59c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05b8[0x160]; // 0x5b8
public:
	bool m_bCheckCSSClasses; // 0x718	
};

