#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1540
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_WeaponEaterVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WeaponEaterTracker; // 0x1530	
};

