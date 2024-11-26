#pragma once

#include <cstdint>

struct HeroBuildID_t;
struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa00
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
	EPlayerPlayState m_ePlayState; // 0x720	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x724	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x728	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x72c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x730	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x734	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x738	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x73c	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x740	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x744	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x748	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x74c	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x750	
	// MNetworkEnable
	int32_t m_nCurrentRank; // 0x754	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x758	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x759	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x75a	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x75b	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x75c	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x75d	
private:
	[[maybe_unused]] uint8_t __pad075e[0x2]; // 0x75e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	HeroBuildID_t m_unHeroBuildID; // 0x760	
	// MNetworkEnable
	bool m_bLaneSwapLocked; // 0x764	
private:
	[[maybe_unused]] uint8_t __pad0765[0x3]; // 0x765
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRequests; // 0x768	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecLaneSwapRejects; // 0x780	
	// MNetworkEnable
	CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // 0x798	
private:
	[[maybe_unused]] uint8_t __pad079c[0x34]; // 0x79c
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x7d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nDeathReplayAvailable; // 0x9f0	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0x9f1	
	bool m_bHasCheckedFriendName; // 0x9f2	
private:
	[[maybe_unused]] uint8_t __pad09f3[0x5]; // 0x9f3
public:
	CUtlString m_sFriendName; // 0x9f8	
};

