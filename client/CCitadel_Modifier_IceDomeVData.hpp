#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x830
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IceDomeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DomeParticle; // 0x710	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x7f0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // 0x800	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDomeEndSound; // 0x810	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strTargetLoopingSound; // 0x820	
};

