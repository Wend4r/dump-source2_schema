#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xac8
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
class C_ItemWeaponParts : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a90[0x20]; // 0xa90
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_hTouchedPlayeres; // 0xab0	
};
