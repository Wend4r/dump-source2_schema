#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15a8	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x15b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15c8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x16b8	
	// MPropertyGroupName "Gameplay"
	float m_flGroundProbeSpeed; // 0x1798	
	float m_flGroundStepDown; // 0x179c	
	float m_flGroundStepUp; // 0x17a0	
	int32_t m_iMaxGroundIterations; // 0x17a4	
	float m_flVelocityScale; // 0x17a8	
};

