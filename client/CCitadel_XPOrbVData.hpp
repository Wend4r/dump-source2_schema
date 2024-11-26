#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_XPOrbVData : public CEntitySubclassVDataBase
{
public:
	bool m_bIsObjective; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x7]; // 0x29
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Played to the player who claimed the orb."
	CSoundEventName m_strOrbClaimed; // 0x30	
	// MPropertyDescription "Played to the teammates of the player who claimed the orb."
	CSoundEventName m_strOrbClaimedTeammate; // 0x40	
	// MPropertyDescription "Played to the player when they denied an enemy orb."
	CSoundEventName m_strOrbDenied; // 0x50	
	// MPropertyDescription "Played to assigned earners when an enemy denied their orb."
	CSoundEventName m_strOrbDeniedPlayer; // 0x60	
	// MPropertyDescription "Played when we predict a hit on the orb but don't fully claim it."
	CSoundEventName m_strOrbHitConfirm; // 0x70	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sOrbModel; // 0x80	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sPredictedHitLimboGlowParticle; // 0x160	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyHitConfirmParticle; // 0x240	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyHitConfirmParticle; // 0x320	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyGlowParticle; // 0x400	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyGlowParticle; // 0x4e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sGoldReceivedParticle; // 0x5c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbDeniedParticle; // 0x6a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbDeniedParticle; // 0x780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbEarnedParticle; // 0x860	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbEarnedParticle; // 0x940	
	// MPropertyStartGroup "Behavior"
	float m_flOrbSpawnDelayMin; // 0xa20	
	float m_flOrbSpawnDelayMax; // 0xa24	
	float m_flOrbSpawnOffsetZ; // 0xa28	
	float m_flOrbSpawnOffsetRandomXYZ; // 0xa2c	
	float m_flGravityScale; // 0xa30	
	float m_flLateralSpeedMin; // 0xa34	
	float m_flLateralSpeedMax; // 0xa38	
	float m_flLateralMoveDuration; // 0xa3c	
	float m_flUpSpeedMin; // 0xa40	
	float m_flUpSpeedMax; // 0xa44	
	float m_flBurstSpeedMultiplier; // 0xa48	
	float m_flBurstSpeedDuration; // 0xa4c	
	float m_flOscillateFrequency; // 0xa50	
	float m_flLifeTime; // 0xa54	
	float m_flRadius; // 0xa58	
	float m_flCollisionRadius; // 0xa5c	
	float m_flInvulDuration; // 0xa60	
	bool m_bUseKillerPlaneOffsets; // 0xa64	
private:
	[[maybe_unused]] uint8_t __pad0a65[0x3]; // 0xa65
public:
	float m_flKillerPlaneOffset; // 0xa68	
	float m_flKillerPlaneHorizontalDecayRate; // 0xa6c	
	float m_flKillerPlaneHorizontalSpeedX; // 0xa70	
	float m_flKillerPlaneHorizontalSpeedY; // 0xa74	
	float m_flKillerPlaneVerticalSpeed; // 0xa78	
	float m_flKillerPlaneSpeedNoise; // 0xa7c	
	float m_flKillerPlaneLaunchOffset; // 0xa80	
	float m_flKillerPlaneLaunchDelay; // 0xa84	
	float m_flOrbClaimWindow; // 0xa88	
};

