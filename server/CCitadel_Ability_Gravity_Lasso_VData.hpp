#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gravity_Lasso_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoSelf; // 0x14e8	
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoTarget; // 0x14f8	
};

