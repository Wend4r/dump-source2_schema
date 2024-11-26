#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TeleportToObjectiveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportOriginParticle; // 0x608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportDestinationParticle; // 0x6e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TeleportStartSound; // 0x7c8	
	CSoundEventName m_TeleportCompleteSound; // 0x7d8	
	CSoundEventName m_TeleportArriveSound; // 0x7e8	
};

