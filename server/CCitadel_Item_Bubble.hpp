#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flEndTime"
class CCitadel_Item_Bubble : public CCitadel_Item
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndTime; // 0xb20	
};

