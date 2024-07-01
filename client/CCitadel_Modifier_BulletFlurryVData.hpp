#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BulletFlurryVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x5e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0x6c0	
	CSoundEventName m_strVictimHitSound; // 0x6d0	
};

