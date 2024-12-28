#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdd8
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
public:
	CUtlStringToken m_TypeIDStickyBombAttached; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b9c[0x234]; // 0xb9c
public:
	bool m_bShouldUseResources; // 0xdd0	
};

