#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1738
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMedicHealVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealBeamParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealTargetParticle; // 0x1648	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHealCastSound; // 0x1728	
};

