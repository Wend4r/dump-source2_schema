#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1648	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1658	
	CEmbeddedSubclass< CCitadelModifier > m_StatStealModifier; // 0x1668	
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x1678	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1688	
	CSoundEventName m_strHitConfirm; // 0x1698	
};

