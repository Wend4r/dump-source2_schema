#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNikumanVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NikumanModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // 0x1578	
};

