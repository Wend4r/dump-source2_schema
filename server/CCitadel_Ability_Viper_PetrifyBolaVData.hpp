#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1670
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viper_PetrifyBolaVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1640	
	CEmbeddedSubclass< CCitadelModifier > m_PetrifyModifier; // 0x1650	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBolaExplodeSound; // 0x1660	
};

