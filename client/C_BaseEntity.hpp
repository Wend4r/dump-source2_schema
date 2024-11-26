#pragma once

#include <cstdint>

struct CBodyComponent;
struct CNetworkTransmitComponent;
struct GameTick_t;
struct CGameSceneNode;
struct CRenderComponent;
struct CCollisionProperty;
struct CModifierProperty;
struct GameTime_t;
struct CNetworkVelocityVector;
struct CParticleProperty;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "Water"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_bTakesDamage"
// MNetworkExcludeByName "m_nTakeDamageFlags"
// MNetworkExcludeByName "m_vecAbsVelocity"
// MNetworkExcludeByName "m_flSpeed"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "CModifierProperty * m_pModifierProp"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "bool m_bTakesDamage"
// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
// MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "GameTime_t m_flCreateTime"
// MNetworkVarNames "float m_flSpeed"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "GameTick_t m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "float32 m_flWaterLevel"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "int m_nGroundBodyIndex"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "float32 m_flGravityScale"
// MNetworkVarNames "float32 m_flTimeScale"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
class C_BaseEntity : public CEntityInstance
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
	[[maybe_unused]] uint8_t __pad0210[0x120]; // 0x210
public:
	GameTick_t m_nLastThinkTick; // 0x330	
private:
	[[maybe_unused]] uint8_t __pad0334[0x4]; // 0x334
public:
	CGameSceneNode* m_pGameSceneNode; // 0x338	
	CRenderComponent* m_pRenderComponent; // 0x340	
	CCollisionProperty* m_pCollision; // 0x348	
	// MNetworkEnable
	// MNetworkChangePointerCallback
	CModifierProperty* m_pModifierProp; // 0x350	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x358	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x35c	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x360	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x361	
private:
	[[maybe_unused]] uint8_t __pad0362[0x6]; // 0x362
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x368	
	// MNetworkEnable
	EntityPlatformTypes_t m_nPlatformType; // 0x370	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x371	
private:
	[[maybe_unused]] uint8_t __pad0372[0x2]; // 0x372
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x374	
	int32_t m_nNoInterpolationTick; // 0x378	
	int32_t m_nVisibilityNoInterpolationTick; // 0x37c	
	float m_flProxyRandomValue; // 0x380	
	int32_t m_iEFlags; // 0x384	
	uint8_t m_nWaterType; // 0x388	
	bool m_bInterpolateEvenWithNoModel; // 0x389	
	bool m_bPredictionEligible; // 0x38a	
	bool m_bApplyLayerMatchIDToModel; // 0x38b	
	CUtlStringToken m_tokLayerMatchID; // 0x38c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x390	
private:
	[[maybe_unused]] uint8_t __pad0394[0xc]; // 0x394
public:
	int32_t m_nSimulationTick; // 0x3a0	
	int32_t m_iCurrentThinkContext; // 0x3a4	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x3a8	
	bool m_bDisabledContextThinks; // 0x3c0	
private:
	[[maybe_unused]] uint8_t __pad03c1[0x3]; // 0x3c1
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	float m_flAnimTime; // 0x3c4	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x3c8	
	uint8_t m_nSceneObjectOverrideFlags; // 0x3cc	
	bool m_bHasSuccessfullyInterpolated; // 0x3cd	
	bool m_bHasAddedVarsToInterpolation; // 0x3ce	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3cf	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3d0	
	uint16_t m_ListEntry[11]; // 0x3d8	
private:
	[[maybe_unused]] uint8_t __pad03ee[0x2]; // 0x3ee
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3f0	
	// MNetworkEnable
	float m_flSpeed; // 0x3f4	
	uint16_t m_EntClientFlags; // 0x3f8	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3fa	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3fb	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x400	
private:
	[[maybe_unused]] uint8_t __pad0404[0x4]; // 0x404
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnFlagsChanged"
	uint32_t m_fFlags; // 0x408	
	Vector m_vecAbsVelocity; // 0x40c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x418	
private:
	[[maybe_unused]] uint8_t __pad0440[0x8]; // 0x440
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x448	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x44c	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x450	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x451	
	MoveType_t m_nActualMoveType; // 0x452	
private:
	[[maybe_unused]] uint8_t __pad0453[0x1]; // 0x453
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x454	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x458	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x45c	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x460	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x464	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x468	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x46c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x470	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x474	
private:
	[[maybe_unused]] uint8_t __pad0475[0x3]; // 0x475
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x478	
	uint16_t m_hThink; // 0x47c	
private:
	[[maybe_unused]] uint8_t __pad047e[0xa]; // 0x47e
public:
	uint8_t m_fBBoxVisFlags; // 0x488	
	bool m_bPredictable; // 0x489	
	bool m_bRenderWithViewModels; // 0x48a	
private:
	[[maybe_unused]] uint8_t __pad048b[0x1]; // 0x48b
public:
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x48c	
	int32_t m_nFirstPredictableCommand; // 0x490	
	int32_t m_nLastPredictableCommand; // 0x494	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x498	
private:
	[[maybe_unused]] uint8_t __pad049c[0x4]; // 0x49c
public:
	CParticleProperty m_Particles; // 0x4a0	
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x4c8	
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04f8[0x18]; // 0x4f8
public:
	int32_t m_nNextScriptVarRecordID; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0xc]; // 0x514
public:
	QAngle m_vecAngVelocity; // 0x520	
	int32_t m_DataChangeEventRef; // 0x52c	
	CUtlVector< CEntityHandle > m_dependencies; // 0x530	
	int32_t m_nCreationTick; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x9]; // 0x54c
public:
	bool m_bAnimTimeChanged; // 0x555	
	bool m_bSimulationTimeChanged; // 0x556	
private:
	[[maybe_unused]] uint8_t __pad0557[0x9]; // 0x557
public:
	CUtlString m_sUniqueHammerID; // 0x560	
	
	// Static fields:
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[11]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x30
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x398
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

