#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:
	Vector m_vMins; // 0x580	
	Vector m_vMaxs; // 0x58c	
	Vector m_vDistanceMins; // 0x598	
	Vector m_vDistanceMaxs; // 0x5a4	
	float m_flWindMin; // 0x5b0	
	float m_flWindMax; // 0x5b4	
	float m_flWindMapMin; // 0x5b8	
	float m_flWindMapMax; // 0x5bc	
	
	// Datamap fields:
	// void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
};

