#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b40
// Has VTable
// 
// MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
// MNetworkVarNames "bool m_bRedraw"
class C_WeaponBaseItem : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; // 0x1b20	
	// MNetworkEnable
	bool m_bRedraw; // 0x1b38	
};

