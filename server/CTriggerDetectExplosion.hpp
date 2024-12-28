#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
class CTriggerDetectExplosion : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x28]; // 0x978
public:
	CEntityIOOutput m_OnDetectedExplosion; // 0x9a0	
};

