#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
class CCitadel_Item : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecComponentsConsumed; // 0xc98	
};

