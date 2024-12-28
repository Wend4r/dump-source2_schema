#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b8
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad097c[0x4]; // 0x97c
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x980	
	float m_fRadius; // 0x988	
	int32_t m_nTouchers; // 0x98c	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x990	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};

