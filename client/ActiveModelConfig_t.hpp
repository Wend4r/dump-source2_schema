#pragma once

#include <cstdint>

struct ModelConfigHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x68
// 
// MNetworkVarNames "ModelConfigHandle_t m_Handle"
// MNetworkVarNames "string_t m_Name"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_AssociatedEntities"
// MNetworkVarNames "string_t m_AssociatedEntityNames"
struct ActiveModelConfig_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x30	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x38	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50	
};

