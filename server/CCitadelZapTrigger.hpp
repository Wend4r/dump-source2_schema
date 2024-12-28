#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
class CCitadelZapTrigger : public CFuncBrush
{
public:
	float m_flShootAfterEnteringTime; // 0x7d8	
	float m_flWaitForNextShootTime; // 0x7dc	
	float m_flPercentMaxHealthDamage; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_strShootOrigin; // 0x7e8	
};

