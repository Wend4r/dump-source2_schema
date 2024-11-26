#pragma once

#include <cstdint>

struct CNetworkVarChainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
class CDestructiblePartsSystemComponent
{
public:
	CNetworkVarChainer __m_pChainEntity; // 0x0	
	CHandle< CBaseModelEntity > m_hOwner; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x54]; // 0x2c
public:
	int32_t m_nLastHitDestructiblePartIndex; // 0x80	
};

