#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CLaneMarkerPath : public CServerOnlyEntity
{
public:
	int32_t m_iLane; // 0x4e0	
	int32_t m_iLaneSlot; // 0x4e4	
};

