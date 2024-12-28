#pragma once

#include <cstdint>

struct CCitadelWeaponInfo;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10e8
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
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphVariation > > m_sAG2VariationName; // 0x3a8	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x488	
	float m_flSightRangePlayers; // 0x4b0	
	float m_flSightRangeNPCs; // 0x4b4	
	CGlobalSymbol m_MeleeAnimName; // 0x4b8	
	float m_flMeleeAttemptRange; // 0x4c0	
	float m_flMeleeHitRange; // 0x4c4	
	CUtlVector< float32 > m_MeleeAttackPoints; // 0x4c8	
	float m_flMaxHealthBarDrawDistance; // 0x4e0	
	// MPropertyStartGroup "Movement"
	float m_flWalkSpeed; // 0x4e4	
	float m_flRunSpeed; // 0x4e8	
	float m_flTurnRate; // 0x4ec	
	float m_flAcceleration; // 0x4f0	
	float m_flStepHeight; // 0x4f4	
	int8_t m_navHull; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x7]; // 0x4f9
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BeamStartSound; // 0x500	
	CSoundEventName m_BeamStopSound; // 0x510	
	CSoundEventName m_BeamPointStartLoopSound; // 0x520	
	CSoundEventName m_BeamPointEndLoopSound; // 0x530	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x540	
	CSoundEventName m_strAmbientLoopSound; // 0x550	
	CSoundEventName m_DeathSound; // 0x560	
	CSoundEventName m_strLastHitSound; // 0x570	
	bool m_bPlayLastHitSound; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0581[0x7]; // 0x581
public:
	CSoundEventName m_MeleeHitSound; // 0x588	
	CSoundEventName m_MeleeHitPlayerSound; // 0x598	
	// MPropertyStartGroup "Visuals"
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sDefaultMaterialGroupName; // 0x5a8	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sEnemyMaterialGroupName; // 0x5b0	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam1MaterialGroupName; // 0x5b8	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam2MaterialGroupName; // 0x5c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x5c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // 0x6a8	
	float m_flModelScale; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad078c[0x4]; // 0x78c
public:
	// MPropertyDescription "Particle to play instead of doing a ragdoll"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // 0x790	
	// MPropertyStartGroup "Health Bar"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // 0x870	
	CUtlString m_sHealthBarAttachment; // 0x950	
	Color m_HealthBarColorFriend; // 0x958	
	Color m_HealthBarColorEnemy; // 0x95c	
	Color m_HealthBarColorTeam1; // 0x960	
	Color m_HealthBarColorTeam2; // 0x964	
	Color m_HealthBarColorTeamNeutral; // 0x968	
	// MPropertyStartGroup "Misc"
	float m_flHealthBarOffset; // 0x96c	
	// MPropertyDescription "When true, spawns breakables defined in the model"
	bool m_bSpawnBreakablesOnDeath; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0971[0x3]; // 0x971
public:
	// MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
	float m_flBreakableForceScale; // 0x974	
	// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
	float m_flPhysicsImpulseMultiplier; // 0x978	
	// MPropertyStartGroup "Beam Weapon"
	float m_flBeamWeaponWidth; // 0x97c	
	float m_flBeamTurnRate; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // 0x988	
	CCitadelWeaponInfo m_WeaponInfo; // 0xa68	
};

