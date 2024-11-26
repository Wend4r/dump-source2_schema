#pragma once

#include <cstdint>

struct CCitadelWeaponInfo;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10d8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CAI_CitadelNPCVData : public CAI_BaseNPCVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphVariation > > m_sAG2VariationName; // 0x398	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x478	
	float m_flSightRangePlayers; // 0x4a0	
	float m_flSightRangeNPCs; // 0x4a4	
	CGlobalSymbol m_MeleeAnimName; // 0x4a8	
	float m_flMeleeAttemptRange; // 0x4b0	
	float m_flMeleeHitRange; // 0x4b4	
	CUtlVector< float32 > m_MeleeAttackPoints; // 0x4b8	
	float m_flMaxHealthBarDrawDistance; // 0x4d0	
	// MPropertyStartGroup "Movement"
	float m_flWalkSpeed; // 0x4d4	
	float m_flRunSpeed; // 0x4d8	
	float m_flTurnRate; // 0x4dc	
	float m_flAcceleration; // 0x4e0	
	float m_flStepHeight; // 0x4e4	
	int8_t m_navHull; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x7]; // 0x4e9
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BeamStartSound; // 0x4f0	
	CSoundEventName m_BeamStopSound; // 0x500	
	CSoundEventName m_BeamPointStartLoopSound; // 0x510	
	CSoundEventName m_BeamPointEndLoopSound; // 0x520	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x530	
	CSoundEventName m_strAmbientLoopSound; // 0x540	
	CSoundEventName m_DeathSound; // 0x550	
	CSoundEventName m_strLastHitSound; // 0x560	
	bool m_bPlayLastHitSound; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0x7]; // 0x571
public:
	CSoundEventName m_MeleeHitSound; // 0x578	
	CSoundEventName m_MeleeHitPlayerSound; // 0x588	
	// MPropertyStartGroup "Visuals"
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sDefaultMaterialGroupName; // 0x598	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sEnemyMaterialGroupName; // 0x5a0	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam1MaterialGroupName; // 0x5a8	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam2MaterialGroupName; // 0x5b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x5b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // 0x698	
	float m_flModelScale; // 0x778	
private:
	[[maybe_unused]] uint8_t __pad077c[0x4]; // 0x77c
public:
	// MPropertyDescription "Particle to play instead of doing a ragdoll"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // 0x780	
	// MPropertyStartGroup "Health Bar"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // 0x860	
	CUtlString m_sHealthBarAttachment; // 0x940	
	Color m_HealthBarColorFriend; // 0x948	
	Color m_HealthBarColorEnemy; // 0x94c	
	Color m_HealthBarColorTeam1; // 0x950	
	Color m_HealthBarColorTeam2; // 0x954	
	Color m_HealthBarColorTeamNeutral; // 0x958	
	// MPropertyStartGroup "Misc"
	float m_flHealthBarOffset; // 0x95c	
	// MPropertyDescription "When true, spawns breakables defined in the model"
	bool m_bSpawnBreakablesOnDeath; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0961[0x3]; // 0x961
public:
	// MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
	float m_flBreakableForceScale; // 0x964	
	// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
	float m_flPhysicsImpulseMultiplier; // 0x968	
	// MPropertyStartGroup "Beam Weapon"
	float m_flBeamWeaponWidth; // 0x96c	
	float m_flBeamTurnRate; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0974[0x4]; // 0x974
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // 0x978	
	CCitadelWeaponInfo m_WeaponInfo; // 0xa58	
};

