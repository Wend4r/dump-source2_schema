#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1518
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // 0x14f0	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1500	
	// MPropertyStartGroup "Gameplay"
	float m_flDamageFalloffEndScale; // 0x1510	
};

