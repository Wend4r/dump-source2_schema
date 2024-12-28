#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public CCitadelModifierVData
{
public:
	float m_flDesatAmount; // 0x630	
	Color m_DesatTint; // 0x634	
	Color m_SatTint; // 0x638	
	Color m_Outline; // 0x63c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShot; // 0x640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerSpawn; // 0x720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerAoE; // 0x800	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerTargetPreview; // 0x8e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShotFail; // 0x9c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DaggerFireSound; // 0xaa0	
	CSoundEventName m_DaggerMissSound; // 0xab0	
	CSoundEventName m_LastDaggerMissSound; // 0xac0	
};

