#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x3]; // 0x979
public:
	float m_fDangerousTimer; // 0x97c	
	int32_t m_minHitPoints; // 0x980	
};

