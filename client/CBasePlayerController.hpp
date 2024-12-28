#pragma once

#include <cstdint>

struct C_CommandContext;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x768
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
// MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
class CBasePlayerController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0560[0x8]; // 0x560
public:
	int32_t m_nFinalPredictedTick; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x4]; // 0x56c
public:
	C_CommandContext m_CommandContext; // 0x570	
	uint64_t m_nInButtonsWhichAreToggles; // 0x628	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x630	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; // 0x634	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad0639[0x3]; // 0x639
public:
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x63c	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x640	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x644	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x648	
	bool m_bIsHLTV; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad0661[0x3]; // 0x661
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x664	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x668	
private:
	[[maybe_unused]] uint8_t __pad06e8[0x8]; // 0x6e8
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x6f0	
	bool m_bIsLocalPlayerController; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x3]; // 0x6f9
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6fc	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x6e8
};

