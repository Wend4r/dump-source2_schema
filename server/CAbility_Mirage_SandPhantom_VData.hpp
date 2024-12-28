#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_SandPhantom_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_SandPhantomModifier; // 0x1578	
};

