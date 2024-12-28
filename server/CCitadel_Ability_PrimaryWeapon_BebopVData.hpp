#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x15b8	
	CSoundEventName m_strBeamStartSound; // 0x15c8	
	CSoundEventName m_strBeamLoopSound1; // 0x15d8	
	CSoundEventName m_strBeamLoopSound2; // 0x15e8	
	CSoundEventName m_strBeamStopSound; // 0x15f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1608	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x16e8	
};

