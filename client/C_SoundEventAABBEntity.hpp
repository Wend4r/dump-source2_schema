#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventAABBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x538	
	// MNetworkEnable
	Vector m_vMaxs; // 0x544	
};

