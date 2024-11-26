#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Mirage_SandPhantom_ProcReady_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcReadyParticle; // 0x608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcReadySound; // 0x6e8	
};

