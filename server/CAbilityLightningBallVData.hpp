#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLightningBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x1578	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLoopingSound; // 0x1588	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // 0x1598	
};

