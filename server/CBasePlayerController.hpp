#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
// Has VTable
// 
// MNetworkIncludeByName "m_pEntity"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_flCreateTime"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkIncludeByName "m_fFlags"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "uint32 m_nTickBase"
// MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
// MNetworkVarNames "bool m_bKnownTeamMismatch"
// MNetworkVarNames "PlayerConnectedState m_iConnected"
// MNetworkVarNames "char m_iszPlayerName"
// MNetworkVarNames "uint64 m_steamID"
// MNetworkVarNames "uint32 m_iDesiredFOV"
class CBasePlayerController : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	uint64_t m_nInButtonsWhichAreToggles; // 0x4f0	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x2c]; // 0x4fc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< CBasePlayerPawn > m_hPawn; // 0x528	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x52c	
private:
	[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x530	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x534	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x538	
	bool m_bIsHLTV; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0551[0x3]; // 0x551
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x554	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x558	
	CUtlString m_szNetworkIDString; // 0x5d8	
	float m_fLerpTime; // 0x5e0	
	bool m_bLagCompensation; // 0x5e4	
	bool m_bPredict; // 0x5e5	
	bool m_bAutoKickDisabled; // 0x5e6	
	bool m_bIsLowViolence; // 0x5e7	
	bool m_bGamePaused; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05e9[0x14f]; // 0x5e9
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x738	
	float m_flLastPlayerTalkTime; // 0x73c	
	float m_flLastEntitySteadyState; // 0x740	
	int32_t m_nAvailableEntitySteadyState; // 0x744	
	bool m_bHasAnySteadyStateEnts; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0xf]; // 0x749
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x758	
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x760	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x750
	// void m_LastCmd; // 0x5f0
	// void m_nLastRealCommandNumberExecuted; // 0x71c
	// void m_nLastLateCommandExecuted; // 0x720
};

