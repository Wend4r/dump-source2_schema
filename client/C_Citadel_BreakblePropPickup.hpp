#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
// MNetworkVarNames "CUtlString m_sAmbientNoise"
class C_Citadel_BreakblePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnActiveChanged"
	bool m_bActive; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x7]; // 0xaf9
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xb00	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	// MNetworkEnable
	CUtlString m_sAmbientNoise; // 0xb10	
};

