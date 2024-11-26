#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x618
// Has VTable
class CTestEffect : public CBaseEntity
{
public:
	int32_t m_iLoop; // 0x4e8	
	int32_t m_iBeam; // 0x4ec	
	CBeam* m_pBeam[24]; // 0x4f0	
	GameTime_t m_flBeamTime[24]; // 0x5b0	
	GameTime_t m_flStartTime; // 0x610	
};

