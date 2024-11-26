#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x608	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x618	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7d8	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x7e8	
	float m_flAirSpeed; // 0x7ec	
	float m_flFallSpeed; // 0x7f0	
};

