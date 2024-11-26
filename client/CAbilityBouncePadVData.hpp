#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x1580	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x1590	
};

