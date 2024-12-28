#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierNikumanVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SelfParticle; // 0x678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEFriendParticle; // 0x758	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x838	
};

