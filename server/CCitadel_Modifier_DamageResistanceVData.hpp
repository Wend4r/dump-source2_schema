#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DamageResistanceVData : public CCitadelModifierVData
{
public:
	float m_flDamageResistancePerSecond; // 0x630	
	float m_flTickInterval; // 0x634	
	float m_flDamageResistanceBonusPerGameMinute; // 0x638	
};

