#pragma once

#include <cstdint>

struct C_EnvWindShared;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWindClientside : public C_BaseEntity
{
public:
	// MNetworkEnable
	C_EnvWindShared m_EnvWindShared; // 0x560	
};

