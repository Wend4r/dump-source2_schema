#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDustStormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DustStormAura; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x1500	
};

