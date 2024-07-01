#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_LifeDrainVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainTargetModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainCasterModifier; // 0x14f0	
};

