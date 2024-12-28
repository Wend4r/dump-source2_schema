#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1830
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData
{
public:
	float m_flResupplyForceScale; // 0x1568	
	float m_flResupplyUp; // 0x156c	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strKilledSound; // 0x1570	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x1580	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // 0x1750	
};

