#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CModifier_Upgrade_ArcaneSurge : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	GameTime_t m_tNextAbilityTriggerWindow; // 0x1a0	
};

