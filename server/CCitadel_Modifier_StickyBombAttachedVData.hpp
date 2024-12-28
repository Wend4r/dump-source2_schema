#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedVictimTeamParticle; // 0x8d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x9b0	
	CSoundEventName m_strTickTockSound; // 0x9c0	
	CSoundEventName m_strTickTockFastSound; // 0x9d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x9e0	
	float m_DetonateWarningTime; // 0x9f0	
};

