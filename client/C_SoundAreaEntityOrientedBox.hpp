#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "Vector m_vMin"
// MNetworkVarNames "Vector m_vMax"
class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x590	
	// MNetworkEnable
	Vector m_vMax; // 0x59c	
};

