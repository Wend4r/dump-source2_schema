#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_SiphonBullets_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x660	
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x670	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x680	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x760	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x840	
};

