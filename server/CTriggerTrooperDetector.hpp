#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class CTriggerTrooperDetector : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0980[0x60]; // 0x980
public:
	float m_flRadius; // 0x9e0	
};

