#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15d0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x16c0	
	// MPropertyGroupName "Gameplay"
	float m_flGroundProbeSpeed; // 0x17a0	
	float m_flGroundStepDown; // 0x17a4	
	float m_flGroundStepUp; // 0x17a8	
	int32_t m_iMaxGroundIterations; // 0x17ac	
	float m_flVelocityScale; // 0x17b0	
};

