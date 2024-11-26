#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x10]; // 0xc0
public:
	GameTime_t m_flLastProcTime; // 0xd0	
};

