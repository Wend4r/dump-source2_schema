#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1890
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15a8	
	CEmbeddedSubclass< CCitadelModifier > m_PullDownModifier; // 0x15b8	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15d8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x17a8	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1888	
	float m_flVelocityScale; // 0x188c	
};

