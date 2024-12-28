#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1760
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_UltComboVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x1728	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x1738	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x1748	
	// MPropertyStartGroup "Gameplay"
	float m_flKillCheckWindow; // 0x1758	
};

