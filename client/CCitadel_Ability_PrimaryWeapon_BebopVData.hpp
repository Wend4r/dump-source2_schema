#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x15b0	
	CSoundEventName m_strBeamStartSound; // 0x15c0	
	CSoundEventName m_strBeamLoopSound1; // 0x15d0	
	CSoundEventName m_strBeamLoopSound2; // 0x15e0	
	CSoundEventName m_strBeamStopSound; // 0x15f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1600	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x16e0	
};

