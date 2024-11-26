#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1580
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gravity_Lasso_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoSelf; // 0x1560	
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoTarget; // 0x1570	
};

