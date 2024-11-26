#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "Vector m_vDistanceInnerMins"
// MNetworkVarNames "Vector m_vDistanceInnerMaxs"
// MNetworkVarNames "Vector m_vDistanceOuterMins"
// MNetworkVarNames "Vector m_vDistanceOuterMaxs"
// MNetworkVarNames "int m_nAABBDirection"
class CCitadelSoundOpvarSetOBB : public CBaseEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x4e8	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x4f0	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x4f8	
	// MNetworkEnable
	Vector m_vDistanceInnerMins; // 0x500	
	// MNetworkEnable
	Vector m_vDistanceInnerMaxs; // 0x50c	
	// MNetworkEnable
	Vector m_vDistanceOuterMins; // 0x518	
	// MNetworkEnable
	Vector m_vDistanceOuterMaxs; // 0x524	
	// MNetworkEnable
	int32_t m_nAABBDirection; // 0x530	
};

