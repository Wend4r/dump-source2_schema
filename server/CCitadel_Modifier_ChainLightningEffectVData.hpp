#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x708
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChainLightningEffectVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x608	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ChainSound; // 0x6e8	
	CSoundEventName m_VictimSound; // 0x6f8	
};

