#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1298
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0xf30	
	float m_flGoldReward; // 0xf34	
	float m_flGoldRewardBonusPercentPerMinute; // 0xf38	
	bool m_bGiveGoldOnHit; // 0xf3c	
	bool m_bOrbDropper; // 0xf3d	
	bool m_bCapSimultanousAttackers; // 0xf3e	
private:
	[[maybe_unused]] uint8_t __pad0f3f[0x1]; // 0xf3f
public:
	float m_flShieldReactivateDelay; // 0xf40	
	float m_flDyingDuration; // 0xf44	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0xf48	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0xf49	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0xf4a	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0xf4b	
private:
	[[maybe_unused]] uint8_t __pad0f4c[0x4]; // 0xf4c
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0xf50	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0x1030	
	float m_flRetaliateCooldown; // 0x1034	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0x1038	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0x1118	
private:
	[[maybe_unused]] uint8_t __pad1119[0x3]; // 0x1119
public:
	float m_flAOERadius; // 0x111c	
	float m_flAOEDamage; // 0x1120	
	float m_flAOEAttackCooldown; // 0x1124	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x1128	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x1208	
	CSoundEventName m_AOEInitiateSound; // 0x1218	
	CSoundEventName m_AOESound; // 0x1228	
	float m_AOEDebuffDuration; // 0x1238	
private:
	[[maybe_unused]] uint8_t __pad123c[0x4]; // 0x123c
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x1240	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1258	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1270	
	float m_flHullCapsuleHeight; // 0x1274	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1278	
private:
	[[maybe_unused]] uint8_t __pad1279[0x7]; // 0x1279
public:
	CSoundEventName m_IdleLoopSound; // 0x1280	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1290	
};

