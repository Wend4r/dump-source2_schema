#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "Vector m_vecUnitStatusOffset"
class C_NPC_BaseDefenseSentry : public C_NPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	Vector m_vecUnitStatusOffset; // 0xb00	
};

