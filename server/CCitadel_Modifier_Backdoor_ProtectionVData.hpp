#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Backdoor_ProtectionVData : public CCitadelModifierVData
{
public:
	// MPropertyDescription "How long this modifier must be alive before backdoor protection is activated"
	float m_flActivationTime; // 0x608	
	// MPropertyDescription "How much should damage be reduced from players when backdoor protection is up? 0 is no reduction, 100 is complete reduction"
	// MPropertyAttributeRange "0 100"
	float m_flBackdoorProtectionDamageMitigationFromPlayers; // 0x60c	
	// MPropertyDescription "How health per second does backdoor protection regen?"
	float m_flHealthPerSecondRegen; // 0x610	
	// MPropertyDescription "How health per second when out of combat?"
	float m_flOutOfCombatHealthRegen; // 0x614	
	// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
	float m_flOutOfCombatRegenDelay; // 0x618	
	// MPropertyDescription "How long the shield effect lingers after having taken damage"
	float m_flEffectsLingerTime; // 0x61c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldActiveParticle; // 0x700	
	CUtlString m_strActiveEffectConfigName; // 0x7e0	
	float flShieldImpactDirectionOffset; // 0x7e8	
};

