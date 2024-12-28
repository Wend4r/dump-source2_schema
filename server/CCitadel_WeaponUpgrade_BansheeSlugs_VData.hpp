#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_BansheeSlugs_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffPerCasterModifier; // 0x15c0	
};

