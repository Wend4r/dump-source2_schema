#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MedicBulletsVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x760	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ProcSound; // 0x840	
};

