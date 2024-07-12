#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7a8
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
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sOrbModel; // 0x70	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyGlowParticle; // 0x150	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyGlowParticle; // 0x230	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sGoldReceivedParticle; // 0x310	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbDeniedParticle; // 0x3f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbDeniedParticle; // 0x4d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbEarnedParticle; // 0x5b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbEarnedParticle; // 0x690	
	// MPropertyStartGroup "Behavior"
	float m_flOrbSpawnDelayMin; // 0x770	
	float m_flOrbSpawnDelayMax; // 0x774	
	float m_flOrbSpawnOffsetZ; // 0x778	
	float m_flOrbSpawnOffsetRandomXYZ; // 0x77c	
	float m_flGravityScale; // 0x780	
	float m_flLateralSpeedMin; // 0x784	
	float m_flLateralSpeedMax; // 0x788	
	float m_flUpSpeedMin; // 0x78c	
	float m_flUpSpeedMax; // 0x790	
	float m_flBurstSpeedMultiplier; // 0x794	
	float m_flBurstSpeedDuration; // 0x798	
	float m_flOscillateFrequency; // 0x79c	
	float m_flLifeTime; // 0x7a0	
	float m_flCollisionRadius; // 0x7a4	
};
