#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1770
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGooGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadeImpactModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraModifier; // 0x1578	
	// MPropertyStartGroup "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeSkipParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeExplodeParticle; // 0x1668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrenadeHitImpactSound; // 0x1748	
	CSoundEventName m_GrenadeMissImpactSound; // 0x1758	
	// MPropertyStartGroup "BounceSettings"
	float m_flMinRestitution; // 0x1768	
	float m_flMaxRestitution; // 0x176c	
};

