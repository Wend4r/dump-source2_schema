#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShieldTracker_BaseVData : public CCitadelModifierVData
{
public:
	float m_flShieldImpactEffectDuration; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x600	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldImpactModifier; // 0x6e0	
	// MPropertyDescription "What type of shield is this."
	EShieldType_t eShieldType; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f1[0x3]; // 0x6f1
public:
	// MPropertyDescription "How long before the shield can regenerate after taking damage, but not breaking."
	float flCooldownOnDamage; // 0x6f4	
	// MPropertyDescription "How long before the shield can regenerate after breaking (going to 0 shield)"
	float flCooldownOnBreak; // 0x6f8	
	// MPropertyDescription "How long does it take the shield to regenerate from 0 to full health. For partial regen, it's the same rate."
	float flRegenDuration; // 0x6fc	
};

