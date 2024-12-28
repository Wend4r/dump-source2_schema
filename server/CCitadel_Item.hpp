#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
class CCitadel_Item : public CCitadelBaseAbility
{
public:
	bool m_bEquipped; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x7]; // 0xaf9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecComponentsConsumed; // 0xb00	
};

