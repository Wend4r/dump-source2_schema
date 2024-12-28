#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_ShadowVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShadowModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_PurgeModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAura; // 0x1588	
	// MPropertyGroupName "GamePlay"
	float m_flAuraRadius; // 0x1598	
};

