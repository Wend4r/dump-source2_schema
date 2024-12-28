#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x1588	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x1598	
};

