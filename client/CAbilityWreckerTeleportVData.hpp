#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1790	
	float m_ArrowOffsetX; // 0x1870	
	float m_ArrowCameraDistance; // 0x1874	
	float m_ArrowCameraHeightOffset; // 0x1878	
	float m_ArrowInitialPitch; // 0x187c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1880	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1890	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x18a0	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x18b0	
	float m_flSpeedAccel; // 0x18b4	
	float m_flSpeedDeccel; // 0x18b8	
	float m_flBaseProjectileSpeed; // 0x18bc	
	float m_flMaxProjectileSpeed; // 0x18c0	
};
