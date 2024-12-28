#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a08
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Trapper_WebWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallDestroyedParticle; // 0x1668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // 0x1748	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // 0x1828	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // 0x1908	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWebWallCreated; // 0x19e8	
	CSoundEventName m_strWebWallDestroyed; // 0x19f8	
};

