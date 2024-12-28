#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierStormCloudVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // 0x8d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // 0x9b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // 0xa90	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strChannelEndingSoonSound; // 0xb70	
	CSoundEventName m_strChannelFinishedSound; // 0xb80	
	CSoundEventName m_strDamageRecievedSound; // 0xb90	
	CSoundEventName m_strAmbientZapSound; // 0xba0	
};

