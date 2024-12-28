#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // 0x1728	
	float m_flSSCameraPreviewOffset; // 0x1738	
	float m_flSSCameraPreviewSpeed; // 0x173c	
	float m_flSSCameraPreviewDistance; // 0x1740	
};

