#pragma once

#include <cstdint>

struct CPlayer_WeaponServices;
struct CPlayer_ItemServices;
struct CPlayer_AutoaimServices;
struct CPlayer_ObserverServices;
struct CPlayer_WaterServices;
struct CPlayer_UseServices;
struct CPlayer_FlashlightServices;
struct CPlayer_CameraServices;
struct CPlayer_MovementServices;
struct sky3dparams_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
// 
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_lifeState"
// MNetworkExcludeByName "m_pWeaponServices"
// MNetworkExcludeByName "m_pItemServices"
// MNetworkExcludeByName "m_pAutoaimServices"
// MNetworkExcludeByName "m_pObserverServices"
// MNetworkExcludeByName "m_pWaterServices"
// MNetworkExcludeByName "m_pUseServices"
// MNetworkExcludeByName "m_pFlashlightServices"
// MNetworkExcludeByName "m_pMovementServices"
// MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
// MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
// MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
// MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
// MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
// MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
// MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
// MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
// MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xd18	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xd20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xd28	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xd30	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xd38	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xd40	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xd48	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xd50	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d60[0x8]; // 0xd60
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xd68	
	QAngle v_angle; // 0xdd0	
	QAngle v_anglePrevious; // 0xddc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0dec[0x4]; // 0xdec
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xdf8
	// -> origin - 0xdfc
	// -> bClip3DSkyBoxNearToWorldFar - 0xe08
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xe0c
	// -> fog - 0xe10
	// -> m_nWorldGroupID - 0xe78
	sky3dparams_t m_skybox3d; // 0xdf0	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xe80	
	Vector m_vecPredictionError; // 0xe84	
	GameTime_t m_flPredictionErrorTime; // 0xe90	
	Vector m_vecLastCameraSetupLocalOrigin; // 0xe94	
	GameTime_t m_flLastCameraSetupTime; // 0xea0	
	float m_flFOVSensitivityAdjust; // 0xea4	
	float m_flMouseSensitivity; // 0xea8	
	Vector m_vOldOrigin; // 0xeac	
	float m_flOldSimulationTime; // 0xeb8	
	int32_t m_nLastExecutedCommandNumber; // 0xebc	
	int32_t m_nLastExecutedCommandTick; // 0xec0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle< CBasePlayerController > m_hController; // 0xec4	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hDefaultController; // 0xec8	
	bool m_bIsSwappingToPredictableController; // 0xecc	
	
	// Static fields:
	static uint32_t &Get_sm_nHighestConsumedServerViewAngleChangeIndex(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BasePlayerPawn")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xece
};

