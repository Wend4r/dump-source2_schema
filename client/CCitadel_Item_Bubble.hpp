#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd60
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flEndTime"
class CCitadel_Item_Bubble : public CCitadel_Item
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndTime; // 0xcb0	
};

