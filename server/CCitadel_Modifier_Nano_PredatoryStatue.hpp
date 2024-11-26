#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x300
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x2c]; // 0xc0
public:
	GameTime_t m_GameTimeEnabled; // 0xec	
	GameTime_t m_LastCatInAreaTime; // 0xf0	
	bool m_bIsAttacking; // 0xf4	
private:
	[[maybe_unused]] uint8_t __pad00f5[0x3]; // 0xf5
public:
	int32_t m_iTargetID; // 0xf8	
};

