#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1598
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityAstroRifleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1588	
};

