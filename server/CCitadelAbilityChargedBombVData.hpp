#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x1560	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1570	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1650	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x1660	
	float m_flMinDamagePercent; // 0x1664	
};

