#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a68
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x1560	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x15e8	
	float m_flCameraHoldAtExplosion; // 0x1670	
	float m_flFadeToBlackTime; // 0x1674	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1758	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x1838	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1918	
	float m_ArrowOffsetX; // 0x19f8	
	float m_ArrowCameraDistance; // 0x19fc	
	float m_ArrowCameraHeightOffset; // 0x1a00	
	float m_ArrowInitialPitch; // 0x1a04	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1a08	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1a18	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x1a28	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1a38	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1a48	
	float m_flSpeedAccel; // 0x1a4c	
	float m_flSpeedDeccel; // 0x1a50	
	float m_flBaseProjectileSpeed; // 0x1a54	
	float m_flMaxProjectileSpeed; // 0x1a58	
	float m_flArrowModelTurnSpringStrength; // 0x1a5c	
	float m_flKillCheckWindow; // 0x1a60	
	float m_flWorldCollideGraceWindow; // 0x1a64	
};

