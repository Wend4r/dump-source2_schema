#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb30
// Has VTable
// 
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class C_CitadelItemPickup : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xb08	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xb0c	
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xb10	
	// MNetworkEnable
	float m_flModelScale; // 0xb18	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetPlayer; // 0xb1c	
	// MNetworkEnable
	float m_flFallRate; // 0xb20	
	
	// Datamap fields:
	// bool from_crate; // 0x7fffffff
};

