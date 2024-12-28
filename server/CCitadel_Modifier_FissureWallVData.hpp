#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FissureWallVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebrisParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpikeParticle; // 0x710	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_WallSpawnSound; // 0x7f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x800	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyVisionModifier; // 0x810	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x820	
};

