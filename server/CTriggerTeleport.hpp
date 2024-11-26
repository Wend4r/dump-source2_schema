#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x990
// Has VTable
class CTriggerTeleport : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iLandmark; // 0x980	
	bool m_bUseLandmarkAngles; // 0x988	
	bool m_bMirrorPlayer; // 0x989	
	bool m_bCheckDestIfClearForPlayer; // 0x98a	
};

