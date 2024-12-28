#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_ActiveReload_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // 0x15b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessSound; // 0x15c0	
	CSoundEventName m_strFailureSound; // 0x15d0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FailureParticle; // 0x16c0	
	// MPropertyStartGroup "Gameplay"
	float m_flGraceTime; // 0x17a0	
};

