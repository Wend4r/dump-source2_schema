#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x448
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_ShieldedSentryVData : public CNPC_SimpleAnimatingAIVData
{
public:
	float m_flZShootPostionOffset; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle; // 0x1f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AutoDestructParticle; // 0x2d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier; // 0x3b0	
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x3c0	
	CEmbeddedSubclass< CCitadelModifier > m_IntrinsicModifier; // 0x3d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSpawnSound; // 0x3e0	
	CSoundEventName m_sKillExplosionSound; // 0x3f0	
	CSoundEventName m_sTargetAcquiredLocalSound; // 0x400	
	CSoundEventName m_sTargetAcquiredSound; // 0x410	
	// MPropertyStartGroup "Stats"
	float m_flIdleTurnSpeed; // 0x420	
	float m_flIdleTurnAngles; // 0x424	
	float m_flTrooperTakeDamageMult; // 0x428	
	float m_flNeutralTakeDamageMulti; // 0x42c	
	float m_flNotifyEventTime; // 0x430	
	float m_flNearDeathDuration; // 0x434	
	float m_flMinimapRevealTime; // 0x438	
	float m_flMinLifetime; // 0x43c	
	float m_flAttackThinkTime; // 0x440	
};

