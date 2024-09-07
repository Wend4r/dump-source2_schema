#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_BubbleVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1538	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1618	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // 0x1628	
};
