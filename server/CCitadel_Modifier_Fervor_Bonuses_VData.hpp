#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Fervor_Bonuses_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BonusesParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ActivateBonusesSound; // 0x6d0	
};
