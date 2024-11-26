#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c68
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // 0x1800	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // 0x18e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x19c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // 0x1aa0	
	float m_flVerticalCameraOffsetLerpTime; // 0x1b80	
	float m_flVerticalCameraOffsetBias; // 0x1b84	
	float m_flVerticalCameraOffset; // 0x1b88	
	float m_flDistanceCameraOffsetLerpTime; // 0x1b8c	
	float m_flDistanceCameraOffsetBias; // 0x1b90	
	float m_flDistanceCameraOffset; // 0x1b94	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x1b98	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BallJumpSound; // 0x1ba0	
	CSoundEventName m_EnterBallSound; // 0x1bb0	
	CSoundEventName m_BallLoopSound; // 0x1bc0	
	CSoundEventName m_ExitBallSound; // 0x1bd0	
	CSoundEventName m_WallImpactSound; // 0x1be0	
	CSoundEventName m_PlayerImpactSound; // 0x1bf0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1c00	
	CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // 0x1c10	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1c20	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1c30	
	float m_flTransformFromBallTime; // 0x1c34	
	float m_flAirTurnRatio; // 0x1c38	
	float m_flWallTurnRatioMax; // 0x1c3c	
	float m_flWallTurnRatioMin; // 0x1c40	
	float m_flTurnRatio; // 0x1c44	
	float m_flDefaultBallSpeed; // 0x1c48	
	float m_flFastBallSpeed; // 0x1c4c	
	float m_flSpeedAccel; // 0x1c50	
	float m_flSpeedDeccel; // 0x1c54	
	float m_flElasticity; // 0x1c58	
	float m_flWallCheckGroundOffset; // 0x1c5c	
	float m_flWallPauseTime; // 0x1c60	
	float m_flWallAngleMin; // 0x1c64	
};

