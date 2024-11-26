#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x260
// Has VTable
class CCitadel_Modifier_Invis : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x188]; // 0xc0
public:
	bool m_bInvis; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
public:
	GameTime_t m_flStartInvisTime; // 0x24c	
	bool m_bFullyInvis; // 0x250	
private:
	[[maybe_unused]] uint8_t __pad0251[0x3]; // 0x251
public:
	GameTime_t m_flLastDamageTaken; // 0x254	
	GameTime_t m_flLastSpotted; // 0x258	
};

