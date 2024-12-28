#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ReturnFireVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpiritReflectTracerReplacement; // 0x7f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0x8d0	
	CSoundEventName m_strHitProcSound; // 0x8e0	
};

