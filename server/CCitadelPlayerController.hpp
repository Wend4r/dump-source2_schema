#pragma once

#include <cstdint>

struct HeroBuildID_t;
struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
// Has VTable
// 
// MNetworkVarNames "EPlayerPlayState m_ePlayState"
// MNetworkVarNames "int m_iGuidedBotMatchLastHits"
// MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
// MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
// MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
// MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
// MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
// MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
// MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
// MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
// MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
// MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
// MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
// MNetworkVarNames "int m_nCurrentRank"
// MNetworkVarNames "int8 m_nAssignedLane"
// MNetworkVarNames "int8 m_nOriginalLaneAssignment"
// MNetworkVarNames "bool m_bIsKingPanda"
// MNetworkVarNames "bool m_bBotDisconnectTakeover"
// MNetworkVarNames "bool m_bInTeamChat"
// MNetworkVarNames "bool m_bInPartyChat"
// MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
// MNetworkVarNames "bool m_bLaneSwapLocked"
// MNetworkVarNames "EHANDLE m_vecLaneSwapRequests"
// MNetworkVarNames "EHANDLE m_vecLaneSwapRejects"
// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
// MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
// MNetworkVarNames "int8 m_nDeathReplayAvailable"
// MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
class CCitadelPlayerController : public CBasePlayerController
{
public:
	// MNetworkEnable
	EPlayerPlayState m_ePlayState; // 0x790	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x794	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x798	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x79c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x7a0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x7a4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x7a8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x7ac	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x7b0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x7b4	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x7b8	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x7bc	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x7c0	
	// MNetworkEnable
	int32_t m_nCurrentRank; // 0x7c4	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x7c8	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x7c9	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x7ca	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x7cb	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x7cc	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x7cd	
private:
	[[maybe_unused]] uint8_t __pad07ce[0x2]; // 0x7ce
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	HeroBuildID_t m_unHeroBuildID; // 0x7d0	
	// MNetworkEnable
	bool m_bLaneSwapLocked; // 0x7d4	
private:
	[[maybe_unused]] uint8_t __pad07d5[0x3]; // 0x7d5
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRequests; // 0x7d8	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRejects; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad0808[0xd8]; // 0x808
public:
	// MNetworkEnable
	CHandle< CCitadelPlayerPawn > m_hHeroPawn; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e4[0x34]; // 0x8e4
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x918	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nDeathReplayAvailable; // 0xb38	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xb39	
private:
	[[maybe_unused]] uint8_t __pad0b3a[0x2]; // 0xb3a
public:
	GameTime_t m_flLastCommsTime; // 0xb3c	
	GameTime_t m_flLastFailedCommsTime; // 0xb40	
	bool m_bLastCommsWasDoublePing; // 0xb44	
private:
	[[maybe_unused]] uint8_t __pad0b45[0x3]; // 0xb45
public:
	int32_t m_nGuideBotNumTasksComplete; // 0xb48	
	bool m_bHasBeenReportedAsCheater; // 0xb4c	
	bool m_bHasGCACKedCheaterReport; // 0xb4d	
	bool m_bHasBeenLoggedAsCheater; // 0xb4e	
	
	// Datamap fields:
	// void CCitadelPlayerControllerResourceDataThink; // 0x0
};

