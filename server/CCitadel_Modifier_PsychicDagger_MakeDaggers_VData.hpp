#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public CCitadelModifierVData
{
public:
	float m_flDesatAmount; // 0x608	
	Color m_DesatTint; // 0x60c	
	Color m_SatTint; // 0x610	
	Color m_Outline; // 0x614	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShot; // 0x618	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerSpawn; // 0x6f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerAoE; // 0x7d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerTargetPreview; // 0x8b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShotFail; // 0x998	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DaggerFireSound; // 0xa78	
	CSoundEventName m_DaggerMissSound; // 0xa88	
	CSoundEventName m_LastDaggerMissSound; // 0xa98	
};

