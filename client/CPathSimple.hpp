#pragma once

#include <cstdint>

struct CPathQueryComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0568[0x8]; // 0x568
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPathQueryComponent"
	// MNetworkAlias "CPathQueryComponent"
	// MNetworkTypeAlias "CPathQueryComponent"
	CPathQueryComponent m_CPathQueryComponent; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad05d0[0x50]; // 0x5d0
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x620	
};

