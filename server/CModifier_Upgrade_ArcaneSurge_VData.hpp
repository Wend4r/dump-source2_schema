#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Upgrade_ArcaneSurge_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WeaponBuffModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_AbilityWatcherModifier; // 0x618	
};

