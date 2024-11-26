#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1440
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0x10d8	
	float m_flGoldReward; // 0x10dc	
	float m_flGoldRewardBonusPercentPerMinute; // 0x10e0	
	bool m_bGiveGoldOnHit; // 0x10e4	
	bool m_bOrbDropper; // 0x10e5	
	bool m_bCapSimultanousAttackers; // 0x10e6	
private:
	[[maybe_unused]] uint8_t __pad10e7[0x1]; // 0x10e7
public:
	float m_flShieldReactivateDelay; // 0x10e8	
	float m_flDyingDuration; // 0x10ec	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0x10f0	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0x10f1	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0x10f2	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0x10f3	
private:
	[[maybe_unused]] uint8_t __pad10f4[0x4]; // 0x10f4
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x10f8	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0x11d8	
	float m_flRetaliateCooldown; // 0x11dc	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0x11e0	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0x12c0	
private:
	[[maybe_unused]] uint8_t __pad12c1[0x3]; // 0x12c1
public:
	float m_flAOERadius; // 0x12c4	
	float m_flAOEDamage; // 0x12c8	
	float m_flAOEAttackCooldown; // 0x12cc	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x12d0	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x13b0	
	CSoundEventName m_AOEInitiateSound; // 0x13c0	
	CSoundEventName m_AOESound; // 0x13d0	
	float m_AOEDebuffDuration; // 0x13e0	
private:
	[[maybe_unused]] uint8_t __pad13e4[0x4]; // 0x13e4
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x13e8	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1400	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1418	
	float m_flHullCapsuleHeight; // 0x141c	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1420	
private:
	[[maybe_unused]] uint8_t __pad1421[0x7]; // 0x1421
public:
	CSoundEventName m_IdleLoopSound; // 0x1428	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1438	
};

