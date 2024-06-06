#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b8
// Has VTable
// 
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
class C_ItemDogtags : public C_Item
{
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_OwningPlayer; // 0x16b0	
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_KillingPlayer; // 0x16b4	
};

