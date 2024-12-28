#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x720	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x800	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x810	
	float m_flAirSpeed; // 0x814	
	float m_flFallSpeed; // 0x818	
};

