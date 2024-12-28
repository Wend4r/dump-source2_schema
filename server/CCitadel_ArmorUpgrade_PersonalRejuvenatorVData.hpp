#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1790
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_PersonalRejuvenatorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sDeploySound; // 0x1770	
	CSoundEventName m_sRespawnSound; // 0x1780	
};

