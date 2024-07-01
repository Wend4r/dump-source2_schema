#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1718
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_PersonalRejuvenatorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sDeploySound; // 0x16e8	
	CSoundEventName m_sRespawnSound; // 0x16f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BonusHealthModifier; // 0x1708	
};

