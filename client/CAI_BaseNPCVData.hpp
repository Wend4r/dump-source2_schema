#pragma once

#include <cstdint>

struct CFootstepTableHandle;
struct NPCStatusEffectMap_t;
struct CSkillFloat;
struct CSkillInt;
struct AI_AdditionalMovementSettings;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x3a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_BaseNPCVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	// MPropertyGroupName "Sounds"
	CFootstepTableHandle m_hFootstepSounds; // 0x108	
	// MPropertyFriendlyName "Nav Link Movements"
	// MPropertyDescription "List of the kind of nav links movement this unit is capable of."
	// MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
	CUtlVector< CGlobalSymbol > m_vecNavLinkMovementNames; // 0x110	
	int32_t m_nMaxHealth; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad012c[0x4]; // 0x12c
public:
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x130	
	// MPropertyFriendlyName "Status Effects"
	// MPropertyDescription "List of the status effects this NPC cares about"
	NPCStatusEffectMap_t m_statusEffectMap; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	CUtlVector< NPCAttachmentDesc_t > m_vecAttachments; // 0x150	
	// MPropertyStartGroup "Damage"
	CSkillFloat m_flHeadDamageMultiplier; // 0x168	
	CSkillFloat m_flChestDamageMultiplier; // 0x178	
	CSkillFloat m_flStomachDamageMultiplier; // 0x188	
	CSkillFloat m_flArmDamageMultiplier; // 0x198	
	CSkillFloat m_flLegDamageMultiplier; // 0x1a8	
	CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1b8	
	bool m_bTakesDamage; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	// MPropertyDescription "Damaged Effect"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamagedEffect; // 0x1d0	
	// MPropertyDescription "Amount of health to grant to a ragdoll before the ragdoll is destroyed."
	int32_t m_nRagdollHealth; // 0x2b0	
private:
	[[maybe_unused]] uint8_t __pad02b4[0x4]; // 0x2b4
public:
	// MPropertyDescription "Destructible Part Overrides.  The key is a unique name for a part (searches all hitgroups and the sub parts).  Will override default data specified in the model."
	CUtlOrderedMap< CUtlString, CDestructiblePartsSystemData_PartRuntimeData > m_DestructiblePartsOverrideByPartName; // 0x2b8	
	// MPropertyStartGroup "Navigation"
	bool m_bAllowNonZUpMovement; // 0x2e0	
	// MPropertyDescription "If true, this NPC will use a dynamic collision hull that allows it to be pushed by heavy things and affected by constraints."
	bool m_bUseDynamicCollisionHull; // 0x2e1	
	// MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
	bool m_bRequestCapsuleCollision; // 0x2e2	
private:
	[[maybe_unused]] uint8_t __pad02e3[0x1]; // 0x2e3
public:
	// MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
	float m_flCapsuleRadiusOverride; // 0x2e4	
	// MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
	float m_flCapsuleHeightOverride; // 0x2e8	
private:
	[[maybe_unused]] uint8_t __pad02ec[0x4]; // 0x2ec
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "Enabled Shared Actions"
	// MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
	// MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sModelName; literal; e_action_desired_shared )"
	CUtlVector< CGlobalSymbol > m_vecActionDesiredShared; // 0x2f0	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Player Killed NPC Sound"
	CSoundEventName m_sPlayerKilledNpcSound; // 0x308	
	// MPropertyStartGroup "Death"
	CGlobalSymbol m_sCustomDeathHandshake; // 0x318	
	// MPropertyStartGroup "Movement"
	// MPropertyDescription "If true, this NPC will use code driven animgraph movement actions such as starts and stops"
	bool m_bEnableCodeDrivenAnimgraphMovement; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad0321[0x7]; // 0x321
public:
	AI_AdditionalMovementSettings m_defaultAdditionalMovementSettings; // 0x328	
};

