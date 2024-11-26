#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // 0x1560	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1570	
	// MPropertyStartGroup "Gameplay"
	float m_flDamageFalloffEndScale; // 0x1580	
};

