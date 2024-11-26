#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "Vector m_vExitOrigin"
class CCitadelTeleportTrigger : public CTriggerModifier
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x990	
	// MNetworkEnable
	Vector m_vExitOrigin; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09b4[0x2c]; // 0x9b4
public:
	CUtlSymbolLarge m_strExitPoint; // 0x9e0	
	CEntityIOOutput m_OnTeleport; // 0x9e8	
	CUtlSymbolLarge m_strPropModel; // 0xa10	
	
	// Datamap fields:
	// void m_pEntExit; // 0x9b8
};

