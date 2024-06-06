#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public CPointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x4c4	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x4d0	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x4d8	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // 0x4e0	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x500	
	CUtlSymbolLarge m_szTargetsName; // 0x518	
	CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // 0x520	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
};
