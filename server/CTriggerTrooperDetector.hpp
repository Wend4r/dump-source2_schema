#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
class CTriggerTrooperDetector : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0918[0x60]; // 0x918
public:
	float m_flRadius; // 0x978	
};

