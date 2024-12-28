#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // 0x8d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x9b0	
	CSoundEventName m_strTargetingCompletedSound; // 0x9c0	
};

