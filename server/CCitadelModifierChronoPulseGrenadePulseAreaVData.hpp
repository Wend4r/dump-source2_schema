#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierChronoPulseGrenadePulseAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x618	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // 0x708	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x7e8	
	CSoundEventName m_strArmedSound; // 0x7f8	
	CSoundEventName m_strLoopingSound; // 0x808	
	CSoundEventName m_strHitSound; // 0x818	
};

