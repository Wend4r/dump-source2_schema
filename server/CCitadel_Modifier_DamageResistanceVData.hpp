#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DamageResistanceVData : public CCitadelModifierVData
{
public:
	float m_flDamageResistancePerSecond; // 0x5e0	
	float m_flTickInterval; // 0x5e4	
	float m_flDamageResistanceBonusPerGameMinute; // 0x5e8	
};

