#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LashParticle; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1648	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strVictimCastSound; // 0x1658	
};

