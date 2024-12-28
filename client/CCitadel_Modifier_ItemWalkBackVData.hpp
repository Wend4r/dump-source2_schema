#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // 0x710	
	// MPropertyStartGroup "Gameplay"
	float m_flStopDistance; // 0x7f0	
	float m_flMaxSpeedDistance; // 0x7f4	
	float m_flSlowSpeed; // 0x7f8	
	float m_flFastSpeed; // 0x7fc	
	float m_flVerticalOffset; // 0x800	
	float m_flTolerance; // 0x804	
	float m_flRepathTime; // 0x808	
	float m_flAutoRunTime; // 0x80c	
	float m_flTimeToStartAutoRun; // 0x810	
};

