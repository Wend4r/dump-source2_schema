#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1750
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_DyingStarVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // 0x1648	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strInFlightAnimGraphParam; // 0x1728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1730	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // 0x1740	
};

