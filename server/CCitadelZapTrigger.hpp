#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CCitadelZapTrigger : public CFuncBrush
{
public:
	float m_flShootAfterEnteringTime; // 0x7e0	
	float m_flWaitForNextShootTime; // 0x7e4	
	float m_flPercentMaxHealthDamage; // 0x7e8	
private:
	[[maybe_unused]] uint8_t __pad07ec[0x4]; // 0x7ec
public:
	CUtlSymbolLarge m_strShootOrigin; // 0x7f0	
};

