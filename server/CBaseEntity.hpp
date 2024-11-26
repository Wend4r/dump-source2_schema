#pragma once

#include <cstdint>

struct CBodyComponent;
struct CNetworkTransmitComponent;
struct GameTick_t;
struct GameTime_t;
struct CEntityIOOutput;
struct CNetworkVelocityVector;
struct CCollisionProperty;
struct CModifierProperty;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Water"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_bTakesDamage"
// MNetworkExcludeByName "m_nTakeDamageFlags"
// MNetworkExcludeByName "m_flSpeed"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "bool m_bTakesDamage"
// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
// MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "GameTime_t m_flCreateTime"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "float m_flSpeed"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "GameTick_t m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "CNetworkVelocityVector m_vecVelocity"
// MNetworkVarNames "CModifierProperty * m_pModifierProp"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "int m_nGroundBodyIndex"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "float32 m_flGravityScale"
// MNetworkVarNames "float32 m_flTimeScale"
// MNetworkVarNames "float m_flWaterLevel"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
class CBaseEntity : public CEntityInstance
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x40	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0210[0x40]; // 0x210
public:
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x250	
	int32_t m_iCurrentThinkContext; // 0x268	
	GameTick_t m_nLastThinkTick; // 0x26c	
	bool m_bDisabledContextThinks; // 0x270	
private:
	[[maybe_unused]] uint8_t __pad0271[0xf]; // 0x271
public:
	CTypedBitVec< 64 > m_isSteadyState; // 0x280	
	float m_lastNetworkChange; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0xc]; // 0x28c
public:
	CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x298	
	CUtlSymbolLarge m_iszResponseContext; // 0x2b0	
private:
	[[maybe_unused]] uint8_t __pad02b8[0x20]; // 0x2b8
public:
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x2d8	
	// MNetworkEnable
	int32_t m_iMaxHealth; // 0x2dc	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e1[0x3]; // 0x2e1
public:
	float m_flDamageAccumulator; // 0x2e4	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x2e8	
private:
	[[maybe_unused]] uint8_t __pad02e9[0x7]; // 0x2e9
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x2f0	
	// MNetworkEnable
	EntityPlatformTypes_t m_nPlatformType; // 0x2f8	
private:
	[[maybe_unused]] uint8_t __pad02f9[0x1]; // 0x2f9
public:
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x2fa	
	// MNetworkEnable
	MoveType_t m_MoveType; // 0x2fb	
	MoveType_t m_nActualMoveType; // 0x2fc	
	uint8_t m_nWaterTouch; // 0x2fd	
	uint8_t m_nSlimeTouch; // 0x2fe	
	bool m_bRestoreInHierarchy; // 0x2ff	
	CUtlSymbolLarge m_target; // 0x300	
	CHandle< CBaseFilter > m_hDamageFilter; // 0x308	
private:
	[[maybe_unused]] uint8_t __pad030c[0x4]; // 0x30c
public:
	CUtlSymbolLarge m_iszDamageFilterName; // 0x310	
	float m_flMoveDoneTime; // 0x318	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CUtlStringToken m_nSubclassID; // 0x31c	
private:
	[[maybe_unused]] uint8_t __pad0320[0x8]; // 0x320
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flAnimTime; // 0x328	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flSimulationTime; // 0x32c	
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x330	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x334	
	// MNetworkEnable
	uint8_t m_ubInterpolationFrame; // 0x335	
private:
	[[maybe_unused]] uint8_t __pad0336[0x2]; // 0x336
public:
	Vector m_vPrevVPhysicsUpdatePos; // 0x338	
	// MNetworkEnable
	uint8_t m_iTeamNum; // 0x344	
private:
	[[maybe_unused]] uint8_t __pad0345[0x3]; // 0x345
public:
	CUtlSymbolLarge m_iGlobalname; // 0x348	
	int32_t m_iSentToClients; // 0x350	
	// MNetworkEnable
	float m_flSpeed; // 0x354	
	CUtlString m_sUniqueHammerID; // 0x358	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x360	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x364	
	int32_t m_nSimulationTick; // 0x368	
private:
	[[maybe_unused]] uint8_t __pad036c[0x4]; // 0x36c
public:
	CEntityIOOutput m_OnKilled; // 0x370	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x398	
	Vector m_vecAbsVelocity; // 0x39c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x3a8	
private:
	[[maybe_unused]] uint8_t __pad03d0[0x8]; // 0x3d0
public:
	int32_t m_nPushEnumCount; // 0x3d8	
private:
	[[maybe_unused]] uint8_t __pad03dc[0x4]; // 0x3dc
public:
	CCollisionProperty* m_pCollision; // 0x3e0	
	// MNetworkEnable
	CModifierProperty* m_pModifierProp; // 0x3e8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEffectEntity; // 0x3f0	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hOwnerEntity; // 0x3f4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x3f8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< CBaseEntity > m_hGroundEntity; // 0x3fc	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x400	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x404	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x408	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x40c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x410	
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x414	
	// MNetworkEnable
	bool m_bAnimatedEveryTick; // 0x418	
	bool m_bDisableLowViolence; // 0x419	
	uint8_t m_nWaterType; // 0x41a	
private:
	[[maybe_unused]] uint8_t __pad041b[0x1]; // 0x41b
public:
	int32_t m_iEFlags; // 0x41c	
	CEntityIOOutput m_OnUser1; // 0x420	
	CEntityIOOutput m_OnUser2; // 0x448	
	CEntityIOOutput m_OnUser3; // 0x470	
	CEntityIOOutput m_OnUser4; // 0x498	
	int32_t m_iInitialTeamNum; // 0x4c0	
	// MNetworkEnable
	GameTime_t m_flNavIgnoreUntilTime; // 0x4c4	
	QAngle m_vecAngVelocity; // 0x4c8	
	bool m_bNetworkQuantizeOriginAndAngles; // 0x4d4	
	bool m_bLagCompensate; // 0x4d5	
private:
	[[maybe_unused]] uint8_t __pad04d6[0x2]; // 0x4d6
public:
	float m_flOverriddenFriction; // 0x4d8	
	CHandle< CBaseEntity > m_pBlocker; // 0x4dc	
	float m_flLocalTime; // 0x4e0	
	float m_flVPhysicsUpdateLocalTime; // 0x4e4	
	
	// Static fields:
	static Relationship_t** &Get_sm_DefaultRelationship(){return *reinterpret_cast<Relationship_t***>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[3]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[4]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[5]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[6]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeedServer(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[7]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->m_static_fields[9]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x30
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x320
	// void* m_think; // 0x290
	// void* m_pfnTouch; // 0x2b8
	// void* m_pfnUse; // 0x2c0
	// void* m_pfnBlocked; // 0x2c8
	// void* m_pfnMoveDone; // 0x2d0
	// int32_t InputSetTeam; // 0x0
	// void InputKill; // 0x0
	// void InputKillHierarchy; // 0x0
	// void InputKillConstrained; // 0x0
	// int32_t InputUse; // 0x0
	// bool InputAlternativeSorting; // 0x0
	// CUtlSymbolLarge InputSetParent; // 0x0
	// CUtlSymbolLarge InputSetParentAttachment; // 0x0
	// CUtlSymbolLarge InputSetParentAttachmentMaintainOffset; // 0x0
	// void InputClearParent; // 0x0
	// CUtlSymbolLarge InputFollowEntity; // 0x0
	// CUtlSymbolLarge InputSetDamageFilter; // 0x0
	// void InputEnableDamageForces; // 0x0
	// void InputDisableDamageForces; // 0x0
	// CUtlSymbolLarge InputDispatchResponse; // 0x0
	// CUtlSymbolLarge InputAddContext; // 0x0
	// CUtlSymbolLarge InputRemoveContext; // 0x0
	// void InputClearContext; // 0x0
	// CUtlSymbolLarge InputAddAttribute; // 0x0
	// CUtlSymbolLarge InputRemoveAttribute; // 0x0
	// CUtlSymbolLarge InputAddModifier; // 0x0
	// CUtlSymbolLarge InputRemoveModifier; // 0x0
	// void InputDisableShadow; // 0x0
	// void InputEnableShadow; // 0x0
	// CUtlSymbolLarge InputFireUser1; // 0x0
	// CUtlSymbolLarge InputFireUser2; // 0x0
	// CUtlSymbolLarge InputFireUser3; // 0x0
	// CUtlSymbolLarge InputFireUser4; // 0x0
	// CUtlSymbolLarge InputChangeSubclass; // 0x0
	// void InputPlatformEnable; // 0x0
	// void InputPlatformDisable; // 0x0
	// void CBaseEntitySUB_Remove; // 0x0
	// void CBaseEntitySUB_RemoveIfUncarried; // 0x0
	// void CBaseEntitySUB_DoNothing; // 0x0
	// void CBaseEntitySUB_Vanish; // 0x0
	// void CBaseEntitySUB_CallUseToggle; // 0x0
	// void CBaseEntitySUB_KillSelf; // 0x0
	// void CBaseEntitySUB_KillSelfIfUncarried; // 0x0
	// void CBaseEntityFrictionRevertThink; // 0x0
	// void CBaseEntityFakeScriptThinkFunc; // 0x0
	// void CBaseEntityClearNavIgnoreContentsThink; // 0x0
	// void m_pGameSceneNode; // 0x278
	// void m_nEntityType; // 0x2f9
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
	// int32_t disableshadows; // 0x7fffffff
	// int32_t disablereceiveshadows; // 0x7fffffff
	// int32_t nodamageforces; // 0x7fffffff
	// float angle; // 0x7fffffff
};

