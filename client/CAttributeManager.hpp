#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MNetworkVarNames "int m_iReapplyProvisionParity"
// MNetworkVarNames "EHANDLE m_hOuter"
// MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
class CAttributeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CHandle< C_BaseEntity > > m_Providers; // 0x8	
	CUtlVector< CHandle< C_BaseEntity > > m_Receivers; // 0x20	
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x38	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOuter; // 0x3c	
	bool m_bPreventLoopback; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x44	
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x48	
};

