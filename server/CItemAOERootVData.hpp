#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOERootVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x15b0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strRootTargetSound; // 0x1690	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // 0x16a0	
};

