#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1898
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_PullDownModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15e0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x17b0	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1890	
	float m_flVelocityScale; // 0x1894	
};

