#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_WeaponEaterVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WeaponEaterTracker; // 0x15b0	
};

