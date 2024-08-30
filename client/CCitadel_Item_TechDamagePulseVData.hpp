#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechDamagePulseVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x1538	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x1618	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x16f8	
	// MPropertyStartGroup "Gameplay"
	int32_t m_iMaxTargets; // 0x1708	
};

