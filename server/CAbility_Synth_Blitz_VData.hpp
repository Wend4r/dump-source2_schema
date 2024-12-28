#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Blitz_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BlitzModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_TechAmpModifier; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlowParticle; // 0x1588	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcSound; // 0x1668	
};

