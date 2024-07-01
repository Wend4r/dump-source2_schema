#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "AbilityID_t m_SourceAbilityID"
// MNetworkVarNames "AbilityID_t m_TargetAbilityID"
// MNetworkVarNames "EModifierValue m_eValType"
// MNetworkVarNames "float m_flValue"
struct DynamicAbilityValues_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_SourceAbilityID; // 0x30	
	// MNetworkEnable
	CUtlStringToken m_TargetAbilityID; // 0x34	
	// MNetworkEnable
	EModifierValue m_eValType; // 0x38	
	// MNetworkEnable
	float m_flValue; // 0x3c	
};

