#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineSpeedVData : public CCitadelModifierVData
{
public:
	float m_flPercentageMultiplierStart; // 0x5f0	
	float m_flPercentageMultiplierEnd; // 0x5f4	
	float m_flRampUpTime; // 0x5f8	
};
