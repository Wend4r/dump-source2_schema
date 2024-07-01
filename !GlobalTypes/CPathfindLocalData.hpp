#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
class CPathfindLocalData
{
public:
	Vector m_vLocalStart; // 0x0	
	Vector m_vLocalEnd; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	WaypointFlags_t m_nEndFlags; // 0x20	
	int32_t m_nBuildFlags; // 0x24	
	int32_t m_nodeID; // 0x28	
	float m_flYaw; // 0x2c	
};

