#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1978
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_RocketBoosterVData : public CCitadel_UtilityUpgrade_RocketBootsVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LandingParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DropDownStartParticle; // 0x1860	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DropDownStartSound; // 0x1940	
	CSoundEventName m_LandingSound; // 0x1950	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1960	
	// MPropertyStartGroup "Gameplay"
	float m_flSlamEnabledTime; // 0x1970	
};

