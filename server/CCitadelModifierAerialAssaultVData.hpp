#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7c0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x7d0	
	float m_flAirSpeed; // 0x7d4	
	float m_flFallSpeed; // 0x7d8	
};
