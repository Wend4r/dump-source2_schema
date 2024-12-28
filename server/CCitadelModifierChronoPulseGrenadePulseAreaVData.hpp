#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierChronoPulseGrenadePulseAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x640	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // 0x730	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x810	
	CSoundEventName m_strArmedSound; // 0x820	
	CSoundEventName m_strLoopingSound; // 0x830	
	CSoundEventName m_strHitSound; // 0x840	
};

