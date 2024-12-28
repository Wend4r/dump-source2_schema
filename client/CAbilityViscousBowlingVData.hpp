#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c70
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // 0x1808	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // 0x18e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x19c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // 0x1aa8	
	float m_flVerticalCameraOffsetLerpTime; // 0x1b88	
	float m_flVerticalCameraOffsetBias; // 0x1b8c	
	float m_flVerticalCameraOffset; // 0x1b90	
	float m_flDistanceCameraOffsetLerpTime; // 0x1b94	
	float m_flDistanceCameraOffsetBias; // 0x1b98	
	float m_flDistanceCameraOffset; // 0x1b9c	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x1ba0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BallJumpSound; // 0x1ba8	
	CSoundEventName m_EnterBallSound; // 0x1bb8	
	CSoundEventName m_BallLoopSound; // 0x1bc8	
	CSoundEventName m_ExitBallSound; // 0x1bd8	
	CSoundEventName m_WallImpactSound; // 0x1be8	
	CSoundEventName m_PlayerImpactSound; // 0x1bf8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1c08	
	CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // 0x1c18	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1c28	
	// MPropertyStartGroup "+Ball Parameters"
	float m_flTransformToBallTime; // 0x1c38	
	float m_flTransformFromBallTime; // 0x1c3c	
	float m_flAirTurnRatio; // 0x1c40	
	float m_flWallTurnRatioMax; // 0x1c44	
	float m_flWallTurnRatioMin; // 0x1c48	
	float m_flTurnRatio; // 0x1c4c	
	float m_flDefaultBallSpeed; // 0x1c50	
	float m_flFastBallSpeed; // 0x1c54	
	float m_flSpeedAccel; // 0x1c58	
	float m_flSpeedDeccel; // 0x1c5c	
	float m_flElasticity; // 0x1c60	
	float m_flWallCheckGroundOffset; // 0x1c64	
	float m_flWallPauseTime; // 0x1c68	
	float m_flWallAngleMin; // 0x1c6c	
};

