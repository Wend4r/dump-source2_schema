#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1578
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStackingDamageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StackingModifier; // 0x1568	
};

