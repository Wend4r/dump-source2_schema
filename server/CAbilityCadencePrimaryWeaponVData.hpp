#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadencePrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15b8	
};

