#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x990
// Has VTable
class CTriggerSave : public CBaseTrigger
{
public:
	bool m_bForceNewLevelUnit; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0981[0x3]; // 0x981
public:
	float m_fDangerousTimer; // 0x984	
	int32_t m_minHitPoints; // 0x988	
};

