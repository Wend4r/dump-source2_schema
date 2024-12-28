#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1590
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // 0x1568	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1578	
	// MPropertyStartGroup "Gameplay"
	float m_flDamageFalloffEndScale; // 0x1588	
};

