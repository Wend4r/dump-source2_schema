#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_Delayed_Stun : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	float m_flRadius; // 0x1a0	
};

