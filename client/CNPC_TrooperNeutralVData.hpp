#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1450
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0x10e8	
	float m_flGoldReward; // 0x10ec	
	float m_flGoldRewardBonusPercentPerMinute; // 0x10f0	
	bool m_bGiveGoldOnHit; // 0x10f4	
	bool m_bOrbDropper; // 0x10f5	
	bool m_bCapSimultanousAttackers; // 0x10f6	
private:
	[[maybe_unused]] uint8_t __pad10f7[0x1]; // 0x10f7
public:
	float m_flShieldReactivateDelay; // 0x10f8	
	float m_flDyingDuration; // 0x10fc	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0x1100	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0x1101	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0x1102	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0x1103	
private:
	[[maybe_unused]] uint8_t __pad1104[0x4]; // 0x1104
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x1108	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0x11e8	
	float m_flRetaliateCooldown; // 0x11ec	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0x11f0	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0x12d0	
private:
	[[maybe_unused]] uint8_t __pad12d1[0x3]; // 0x12d1
public:
	float m_flAOERadius; // 0x12d4	
	float m_flAOEDamage; // 0x12d8	
	float m_flAOEAttackCooldown; // 0x12dc	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x12e0	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x13c0	
	CSoundEventName m_AOEInitiateSound; // 0x13d0	
	CSoundEventName m_AOESound; // 0x13e0	
	float m_AOEDebuffDuration; // 0x13f0	
private:
	[[maybe_unused]] uint8_t __pad13f4[0x4]; // 0x13f4
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x13f8	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1410	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1428	
	float m_flHullCapsuleHeight; // 0x142c	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1430	
private:
	[[maybe_unused]] uint8_t __pad1431[0x7]; // 0x1431
public:
	CSoundEventName m_IdleLoopSound; // 0x1438	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1448	
};

