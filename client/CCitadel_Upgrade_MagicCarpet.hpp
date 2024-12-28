#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd68
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bSummoning"
class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item
{
public:
	GameTime_t m_flFlyingStartTime; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb4[0xac]; // 0xcb4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFlying; // 0xd60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSummoning; // 0xd61	
};

