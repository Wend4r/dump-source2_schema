#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
class CCitadelTeleportLocation : public CServerOnlyEntity
{
public:
	int32_t m_iLane; // 0x4b8	
	int32_t m_iObjective; // 0x4bc	
};
