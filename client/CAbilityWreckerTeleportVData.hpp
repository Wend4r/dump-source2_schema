#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1940
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1808	
	float m_ArrowOffsetX; // 0x18e8	
	float m_ArrowCameraDistance; // 0x18ec	
	float m_ArrowCameraHeightOffset; // 0x18f0	
	float m_ArrowInitialPitch; // 0x18f4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x18f8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1908	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1918	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1928	
	float m_flSpeedAccel; // 0x192c	
	float m_flSpeedDeccel; // 0x1930	
	float m_flBaseProjectileSpeed; // 0x1934	
	float m_flMaxProjectileSpeed; // 0x1938	
};

