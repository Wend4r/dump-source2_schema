#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1768
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCrackshotVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1728	
	CEmbeddedSubclass< CCitadelModifier > m_CrackshotImmuneModifier; // 0x1738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HeadShotVictimSound; // 0x1748	
	CSoundEventName m_HeadShotConfirmationSound; // 0x1758	
};

