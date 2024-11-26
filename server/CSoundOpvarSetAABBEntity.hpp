#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d8
// Has VTable
class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:
	Vector m_vDistanceInnerMins; // 0x670	
	Vector m_vDistanceInnerMaxs; // 0x67c	
	Vector m_vDistanceOuterMins; // 0x688	
	Vector m_vDistanceOuterMaxs; // 0x694	
	int32_t m_nAABBDirection; // 0x6a0	
	Vector m_vInnerMins; // 0x6a4	
	Vector m_vInnerMaxs; // 0x6b0	
	Vector m_vOuterMins; // 0x6bc	
	Vector m_vOuterMaxs; // 0x6c8	
	
	// Datamap fields:
	// void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
};

