#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x110
// 
// MModelGameData
// MGetKV3ClassDefaults
struct CCitadelHeroModelGameData_t
{
public:
	CStrongHandle< InfoForResourceTypeIAnimGraphModelBinding > m_UIAnimGraph; // 0x0	
	CStrongHandle< InfoForResourceTypeIAnimGraphModelBinding > m_UIShopAnimGraph; // 0x8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hAmbientParticle; // 0x10	
	CUtlVector< AmbientParticleSettings_t > m_vecAmbientParticleSettings; // 0xf0	
	float m_flTurnThreshold; // 0x108	
	float m_flTurnDuration; // 0x10c	
};

