#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1670
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1578	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1658	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x1668	
	float m_flMinDamagePercent; // 0x166c	
};

