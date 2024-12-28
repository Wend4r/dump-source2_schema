#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Fervor_Bonuses_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BonusesParticle; // 0x630	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ActivateBonusesSound; // 0x710	
};

