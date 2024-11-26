#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1580
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_LifeDrainVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainTargetModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainCasterModifier; // 0x1570	
};

