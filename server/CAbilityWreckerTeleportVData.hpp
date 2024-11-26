#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1938
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1800	
	float m_ArrowOffsetX; // 0x18e0	
	float m_ArrowCameraDistance; // 0x18e4	
	float m_ArrowCameraHeightOffset; // 0x18e8	
	float m_ArrowInitialPitch; // 0x18ec	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x18f0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1900	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1910	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1920	
	float m_flSpeedAccel; // 0x1924	
	float m_flSpeedDeccel; // 0x1928	
	float m_flBaseProjectileSpeed; // 0x192c	
	float m_flMaxProjectileSpeed; // 0x1930	
};

