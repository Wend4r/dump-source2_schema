#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Upgrade_ArcaneSurge_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WeaponBuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_AbilityWatcherModifier; // 0x640	
};

