#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ScalingPowerUpVData : public CCitadelModifierVData
{
public:
	CUtlVector< ScalingPowerupDefinition_t > m_vecModifierValues; // 0x608	
	float m_flTimeMin; // 0x620	
	float m_flTimeMax; // 0x624	
};

