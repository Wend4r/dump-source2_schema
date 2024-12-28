#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Operative_UmbrellaManeuver_AirHang_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7f0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x800	
	float m_flAirSpeed; // 0x804	
	float m_flFallSpeed; // 0x808	
};

