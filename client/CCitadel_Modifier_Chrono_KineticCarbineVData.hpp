#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Chrono_KineticCarbineVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FullyChargedParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFullyCharged; // 0x7f0	
	CSoundEventName m_strShotSound; // 0x800	
};

