#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bebop_LaserBeamVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // 0x720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // 0x800	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x8e0	
	CSoundEventName m_strLaserEndSound; // 0x8f0	
	CSoundEventName m_strLaserLoopSound; // 0x900	
	CSoundEventName m_strLaserHitSound; // 0x910	
};

