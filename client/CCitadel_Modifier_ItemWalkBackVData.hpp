#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // 0x608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // 0x6e8	
	// MPropertyStartGroup "Gameplay"
	float m_flStopDistance; // 0x7c8	
	float m_flMaxSpeedDistance; // 0x7cc	
	float m_flSlowSpeed; // 0x7d0	
	float m_flFastSpeed; // 0x7d4	
	float m_flVerticalOffset; // 0x7d8	
	float m_flTolerance; // 0x7dc	
	float m_flRepathTime; // 0x7e0	
	float m_flAutoRunTime; // 0x7e4	
	float m_flTimeToStartAutoRun; // 0x7e8	
};

