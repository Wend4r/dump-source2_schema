#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_Headhunter_VData : public CCitadel_WeaponUpgrade_HeadshotBooster_VData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HeadshotBuffModifier; // 0x15c8	
};

