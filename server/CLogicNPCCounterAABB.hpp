#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x858
// Has VTable
class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:
	Vector m_vDistanceOuterMins; // 0x828	
	Vector m_vDistanceOuterMaxs; // 0x834	
	Vector m_vOuterMins; // 0x840	
	Vector m_vOuterMaxs; // 0x84c	
};

