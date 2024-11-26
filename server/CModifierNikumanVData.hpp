#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierNikumanVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SelfParticle; // 0x648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEFriendParticle; // 0x728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x808	
};

