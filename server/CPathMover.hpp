#pragma once

#include <cstdint>

struct CPathQueryComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b8
// Has VTable
// 
// MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
class CPathMover : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPathQueryComponent"
	// MNetworkAlias "CPathQueryComponent"
	// MNetworkTypeAlias "CPathQueryComponent"
	// -> m_vecPathSamplePositions - 0x500
	// -> m_vecPathSampleParameters - 0x518
	// -> m_vecPathSampleDistances - 0x530
	CPathQueryComponent m_CPathQueryComponent; // 0x4e8	
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x548	
	bool m_bClosedLoop; // 0x560	
};

