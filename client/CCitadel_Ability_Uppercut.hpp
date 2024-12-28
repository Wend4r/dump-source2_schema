#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf50
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
private:
	[[maybe_unused]] uint8_t __pad0d18[0x230]; // 0xd18
public:
	bool m_bShouldUseResources; // 0xf48	
};

