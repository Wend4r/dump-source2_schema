#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TeleportToObjectiveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportOriginParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportDestinationParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TeleportStartSound; // 0x7f0	
	CSoundEventName m_TeleportCompleteSound; // 0x800	
	CSoundEventName m_TeleportArriveSound; // 0x810	
};

