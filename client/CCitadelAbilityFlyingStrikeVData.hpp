#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c00
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x1570	
	float m_flJumpAirDrag; // 0x1574	
	float m_flJumpAirSpeedMax; // 0x1578	
	// MPropertyStartGroup "+Flying to Target Properties"
	// MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
	float m_flOnCancelVerticalSpeedBonus; // 0x157c	
	float m_flFlyingCloseEnoughToTarget; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1584[0x4]; // 0x1584
public:
	CPiecewiseCurve m_curveSpeedScale; // 0x1588	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x15c8	
	float m_flAnimToStrikeArrivalBias; // 0x15cc	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x15d0	
	float m_flGrappleShotDelayToFlyOnHit; // 0x15d4	
	float m_flGrappleSpeed; // 0x15d8	
private:
	[[maybe_unused]] uint8_t __pad15dc[0x4]; // 0x15dc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x15e0	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x15f0	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x1600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x17d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x18b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x1990	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1a70	
	CSoundEventName m_strStartFlyingToTarget; // 0x1a80	
	CSoundEventName m_strStartAttack; // 0x1a90	
	CSoundEventName m_strGrappleHitTarget; // 0x1aa0	
	CSoundEventName m_strGrappleHitWorld; // 0x1ab0	
	CSoundEventName m_strGrappleHitNothing; // 0x1ac0	
	CSoundEventName m_strGrappleLoop; // 0x1ad0	
	CSoundEventName m_strFlyingLoop; // 0x1ae0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1af0	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1b78	
};

