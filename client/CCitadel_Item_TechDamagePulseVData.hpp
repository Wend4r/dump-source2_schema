#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1788
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechDamagePulseVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x1770	
	// MPropertyStartGroup "Gameplay"
	int32_t m_iMaxTargets; // 0x1780	
};

