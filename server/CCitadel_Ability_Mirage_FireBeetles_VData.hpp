#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1640	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1650	
	CEmbeddedSubclass< CCitadelModifier > m_RecentlyDebuffedModifier; // 0x1660	
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x1670	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1680	
	CSoundEventName m_strHitConfirm; // 0x1690	
};

