#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SleepBombVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeDamageFriendlyParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeDamageEnemyParticle; // 0x7b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x8a0	
};

