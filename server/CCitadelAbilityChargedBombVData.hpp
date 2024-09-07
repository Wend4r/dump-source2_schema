#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15e0	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x15f0	
	float m_flMinDamagePercent; // 0x15f4	
};
