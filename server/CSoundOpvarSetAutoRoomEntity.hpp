#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6b0
// Has VTable
class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity
{
public:
	CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // 0x670	
	CUtlVector< AutoRoomDoorwayPairs_t > m_doorwayPairs; // 0x688	
	float m_flSize; // 0x6a0	
	float m_flHeightTolerance; // 0x6a4	
	float m_flSizeSqr; // 0x6a8	
	
	// Datamap fields:
	// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
};

