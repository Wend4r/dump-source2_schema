#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x738
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShieldTracker_BaseVData : public CCitadelModifierVData
{
public:
	float m_flShieldImpactEffectDuration; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x638	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldImpactModifier; // 0x718	
	// MPropertyDescription "What type of shield is this."
	EShieldType_t eShieldType; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad0729[0x3]; // 0x729
public:
	// MPropertyDescription "How long before the shield can regenerate after taking damage, but not breaking."
	float flCooldownOnDamage; // 0x72c	
	// MPropertyDescription "How long before the shield can regenerate after breaking (going to 0 shield)"
	float flCooldownOnBreak; // 0x730	
	// MPropertyDescription "How long does it take the shield to regenerate from 0 to full health. For partial regen, it's the same rate."
	float flRegenDuration; // 0x734	
};

