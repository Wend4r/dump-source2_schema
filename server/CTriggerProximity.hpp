#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x988	
	float m_fRadius; // 0x990	
	int32_t m_nTouchers; // 0x994	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x998	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};

