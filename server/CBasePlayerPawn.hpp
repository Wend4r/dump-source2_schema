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
struct CAI_Expresser;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
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
// MNetworkUserGroupProxy "CBasePlayerPawn"
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
class CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xb58	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xb60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xb68	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xb70	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xb78	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xb80	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xb88	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xb90	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0ba0[0x8]; // 0xba0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xba8	
	QAngle v_angle; // 0xc10	
	QAngle v_anglePrevious; // 0xc1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c2c[0x4]; // 0xc2c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xc38
	// -> origin - 0xc3c
	// -> bClip3DSkyBoxNearToWorldFar - 0xc48
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xc4c
	// -> fog - 0xc50
	// -> m_nWorldGroupID - 0xcb8
	sky3dparams_t m_skybox3d; // 0xc30	
	GameTime_t m_fTimeLastHurt; // 0xcc0	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xcc4	
	GameTime_t m_fNextSuicideTime; // 0xcc8	
	bool m_fInitHUD; // 0xccc	
private:
	[[maybe_unused]] uint8_t __pad0ccd[0x3]; // 0xccd
public:
	CAI_Expresser* m_pExpresser; // 0xcd0	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hController; // 0xcd8	
	// MNetworkEnable
	CHandle< CBasePlayerController > m_hDefaultController; // 0xcdc	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x4]; // 0xce0
public:
	float m_fHltvReplayDelay; // 0xce4	
	float m_fHltvReplayEnd; // 0xce8	
	CEntityIndex m_iHltvReplayEntity; // 0xcec	
	CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xcf0	
	
	// Static fields:
	static uint32_t &Get_sm_nHighestGeneratedServerViewAngleChangeIndex(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerPawn")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xce0
	// void m_hLastValidNavArea; // 0xb08
	// void m_hCurrentNavArea; // 0xaf8
	// void m_hCurrentNavAreaBlocked; // 0xb18
	// CHandle< CBaseEntity > controller; // 0x7fffffff
	// int32_t InputSetHealth; // 0x0
	// bool InputSetHUDVisibility; // 0x0
	// CUtlSymbolLarge InputSetFogController; // 0x0
};

