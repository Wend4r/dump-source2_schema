#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class CTriggerItemShopSafeZone : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x20]; // 0x978
public:
	CEntityIOOutput m_OnContested; // 0x998	
	CEntityIOOutput m_OnNotContested; // 0x9c0	
};

