#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class CSoundEventAABBEntity : public CSoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x590	
	// MNetworkEnable
	Vector m_vMaxs; // 0x59c	
};

