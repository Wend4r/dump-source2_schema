#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNikumanVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NikumanModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // 0x1500	
};
