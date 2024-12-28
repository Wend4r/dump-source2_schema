#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x800
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MetalSkinVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStartParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitProcSound; // 0x7f0	
};

