#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x800
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CloakingDevice_Active_Ambush_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbushParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strActivateAmbushSound; // 0x7f0	
};

