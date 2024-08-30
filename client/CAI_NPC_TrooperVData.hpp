#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData
{
public:
	TrooperType_t m_TrooperType; // 0xf30	
	float m_flTrooperDamageResistPct; // 0xf34	
	float m_flT1BossDamageResistPct; // 0xf38	
	float m_flT2BossDamageResistPct; // 0xf3c	
	float m_flBarrackGuardianDamageResistPct; // 0xf40	
	float m_flNearDeathDuration; // 0xf44	
	float m_flFlySpeed; // 0xf48	
	float m_flFlyHeight; // 0xf4c	
	float m_flMeleeDamage; // 0xf50	
	float m_flMeleeDuration; // 0xf54	
	float m_flMeleeChargeRange; // 0xf58	
	float m_flAttackT1BossMaxRange; // 0xf5c	
	float m_flAttackTrooperMaxRange; // 0xf60	
	float m_flShieldDamageResistPct; // 0xf64	
	float m_flHealthBarOffsetDucking; // 0xf68	
	// MPropertyStartGroup "Trooper DPS"
	// MPropertyDescription "Trooper vs Trooper DPS"
	float m_flTrooperDPS; // 0xf6c	
	// MPropertyDescription "Trooper vs Player DPS"
	float m_flPlayerDPS; // 0xf70	
	// MPropertyDescription "Trooper vs T1 Guardian DPS"
	float m_flT1BossDPS; // 0xf74	
	// MPropertyDescription "Trooper vs T2 Guardian DPS"
	float m_flT2BossDPS; // 0xf78	
	// MPropertyDescription "Trooper vs T3 Guardian DPS"
	float m_flT3BossDPS; // 0xf7c	
	// MPropertyDescription "Trooper vs Barrack Guardian DPS"
	float m_flBarrackBossDPS; // 0xf80	
	// MPropertyDescription "Trooper vs Generator DPS"
	float m_flGeneratorBossDPS; // 0xf84	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // 0xf88	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // 0x1068	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // 0x1148	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // 0x1228	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // 0x1308	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // 0x13e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // 0x14c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sPlayerLastHitSound; // 0x15a8	
	CSoundEventName m_sCelebrationSound; // 0x15b8	
	CSoundEventName m_sZiplineContainerBreakSound; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // 0x15e8	
};

