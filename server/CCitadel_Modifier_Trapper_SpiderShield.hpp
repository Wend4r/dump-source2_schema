#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_Trapper_SpiderShield : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x8]; // 0xc0
public:
	GameTime_t m_flNextPulseTime; // 0xc8	
};

