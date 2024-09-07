#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hLocalPortalLink"
// MNetworkVarNames "EHANDLE m_hRemotePortalLink"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "float m_flFadeStartDist"
// MNetworkVarNames "float m_flFadeEndDist"
// MNetworkVarNames "float m_flFadeStartAngle"
// MNetworkVarNames "float m_flFadeEndAngle"
// MNetworkVarNames "Color m_fadeToColor"
class CRenderPortal : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_szLocalPortalLink; // 0x768	
	CUtlSymbolLarge m_szRemotePortalLink; // 0x770	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLocalPortalLink; // 0x778	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemotePortalLink; // 0x77c	
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x780	
	// MNetworkEnable
	float m_flFadeStartDist; // 0x788	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x78c	
	// MNetworkEnable
	float m_flFadeStartAngle; // 0x790	
	// MNetworkEnable
	float m_flFadeEndAngle; // 0x794	
	// MNetworkEnable
	Color m_fadeToColor; // 0x798	
};
