#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bSummoning"
class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item
{
public:
	GameTime_t m_flFlyingStartTime; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0xac]; // 0xb1c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFlying; // 0xbc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSummoning; // 0xbc9	
};

