#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_LifeDrainVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainTargetModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainCasterModifier; // 0x1578	
};

