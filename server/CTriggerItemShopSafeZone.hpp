#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
// Has VTable
class CTriggerItemShopSafeZone : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0980[0x20]; // 0x980
public:
	CEntityIOOutput m_OnContested; // 0x9a0	
	CEntityIOOutput m_OnNotContested; // 0x9c8	
};

