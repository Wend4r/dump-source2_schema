#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1bf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x1568	
	float m_flJumpAirDrag; // 0x156c	
	float m_flJumpAirSpeedMax; // 0x1570	
	// MPropertyStartGroup "+Flying to Target Properties"
	// MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
	float m_flOnCancelVerticalSpeedBonus; // 0x1574	
	float m_flFlyingCloseEnoughToTarget; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad157c[0x4]; // 0x157c
public:
	CPiecewiseCurve m_curveSpeedScale; // 0x1580	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x15c0	
	float m_flAnimToStrikeArrivalBias; // 0x15c4	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x15c8	
	float m_flGrappleShotDelayToFlyOnHit; // 0x15cc	
	float m_flGrappleSpeed; // 0x15d0	
private:
	[[maybe_unused]] uint8_t __pad15d4[0x4]; // 0x15d4
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x15d8	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x15e8	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x15f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x17c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x18a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x1988	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1a68	
	CSoundEventName m_strStartFlyingToTarget; // 0x1a78	
	CSoundEventName m_strStartAttack; // 0x1a88	
	CSoundEventName m_strGrappleHitTarget; // 0x1a98	
	CSoundEventName m_strGrappleHitWorld; // 0x1aa8	
	CSoundEventName m_strGrappleHitNothing; // 0x1ab8	
	CSoundEventName m_strGrappleLoop; // 0x1ac8	
	CSoundEventName m_strFlyingLoop; // 0x1ad8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1ae8	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1b70	
};

