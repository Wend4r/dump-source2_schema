#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1598
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_ShadowVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShadowModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_PurgeModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAura; // 0x1580	
	// MPropertyGroupName "GamePlay"
	float m_flAuraRadius; // 0x1590	
};

