#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
class CCitadel_Ability_TangoTether_Trigger : public CCitadelBaseTriggerAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b08[0x4]; // 0xb08
public:
	CHandle< CCitadelBaseAbility > m_hBaseAbility; // 0xb0c	
};

