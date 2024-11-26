#pragma once

#include <cstdint>

struct CPathQueryComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
// 
// MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
class CPathMover : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPathQueryComponent"
	// MNetworkAlias "CPathQueryComponent"
	// MNetworkTypeAlias "CPathQueryComponent"
	// -> m_vecPathSamplePositions - 0x508
	// -> m_vecPathSampleParameters - 0x520
	// -> m_vecPathSampleDistances - 0x538
	CPathQueryComponent m_CPathQueryComponent; // 0x4f0	
	CUtlVector< CHandle< CMoverPathNode > > m_vecPathNodes; // 0x550	
	bool m_bClosedLoop; // 0x568	
};

