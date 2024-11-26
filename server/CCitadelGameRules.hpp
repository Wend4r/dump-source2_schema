#pragma once

#include <cstdint>

struct GameTime_t;
struct CountdownTimer;
struct MatchID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2808
// Has VTable
// 
// MNetworkVarNames "bool m_bFreezePeriod"
// MNetworkVarNames "GameTime_t m_fLevelStartTime"
// MNetworkVarNames "GameTime_t m_flGameStartTime"
// MNetworkVarNames "GameTime_t m_flRoundStartTime"
// MNetworkVarNames "EGameState m_eGameState"
// MNetworkVarNames "EHANDLE m_hTowerAmber"
// MNetworkVarNames "EHANDLE m_hTowerSapphire"
// MNetworkVarNames "bool m_bEnemyInAmberBase"
// MNetworkVarNames "bool m_bEnemyInSapphireBase"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "bool m_bMatchSafeToAbandon"
// MNetworkVarNames "bool m_bNoDeathEnabled"
// MNetworkVarNames "bool m_bFastCooldownsEnabled"
// MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
// MNetworkVarNames "bool m_bUnlimitedAmmoEnabled"
// MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
// MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
// MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
// MNetworkVarNames "ECitadelGameMode m_eGameMode"
// MNetworkVarNames "uint32 m_unSpectatorCount"
// MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "int m_iPauseTeam"
// MNetworkVarNames "int m_nMatchClockUpdateTick"
// MNetworkVarNames "float m_flMatchClockAtLastUpdate"
// MNetworkVarNames "bool m_bRequiresReportCardDismissal"
// MNetworkVarNames "int m_eGGTeam"
// MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
// MNetworkVarNames "MatchID_t m_unMatchID"
// MNetworkVarNames "int m_nExperimentalGameplayState"
// MNetworkVarNames "GameTime_t m_flHeroDiedTime"
class CCitadelGameRules : public CTeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x10]; // 0xc0
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MNetworkEnable
	GameTime_t m_fLevelStartTime; // 0xd4	
	// MNetworkEnable
	GameTime_t m_flGameStartTime; // 0xd8	
	// MNetworkEnable
	GameTime_t m_flRoundStartTime; // 0xdc	
	// MNetworkEnable
	EGameState m_eGameState; // 0xe0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTowerAmber; // 0xe4	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTowerSapphire; // 0xe8	
	// MNetworkEnable
	bool m_bEnemyInAmberBase; // 0xec	
	// MNetworkEnable
	bool m_bEnemyInSapphireBase; // 0xed	
private:
	[[maybe_unused]] uint8_t __pad00ee[0x2]; // 0xee
public:
	// MNetworkEnable
	Vector m_vMinimapMins; // 0xf0	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0xfc	
	// MNetworkEnable
	bool m_bMatchSafeToAbandon; // 0x108	
	// MNetworkEnable
	bool m_bNoDeathEnabled; // 0x109	
	// MNetworkEnable
	bool m_bFastCooldownsEnabled; // 0x10a	
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled; // 0x10b	
	// MNetworkEnable
	bool m_bUnlimitedAmmoEnabled; // 0x10c	
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled; // 0x10d	
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked; // 0x10e	
private:
	[[maybe_unused]] uint8_t __pad010f[0x1]; // 0x10f
public:
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode; // 0x110	
	// MNetworkEnable
	ECitadelGameMode m_eGameMode; // 0x114	
	// MNetworkEnable
	uint32_t m_unSpectatorCount; // 0x118	
	// MNetworkEnable
	CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // 0x11c	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hCurrentHeroDrafterRebels; // 0x120	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< CBaseEntity > m_hCurrentHeroDrafterCombine; // 0x124	
	bool m_bDontUploadStats; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x3]; // 0x129
public:
	int32_t m_iWinningTeam; // 0x12c	
private:
	[[maybe_unused]] uint8_t __pad0130[0x70]; // 0x130
public:
	bool m_bSpawnedBots; // 0x1a0	
	bool m_bGuideBotAssigned; // 0x1a1	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	float m_timeLastSpawnCrates; // 0x1a4	
	bool m_bNotifiedClientsOfNextCrateSpawn; // 0x1a8	
	bool m_bEarlyCratesSpawned; // 0x1a9	
	bool m_bIsEarlyCrateGamestate; // 0x1aa	
private:
	[[maybe_unused]] uint8_t __pad01ab[0x2a5]; // 0x1ab
public:
	GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x450	
	int32_t m_nNextHeroDraftPosition; // 0x454	
private:
	[[maybe_unused]] uint8_t __pad0458[0x1250]; // 0x458
public:
	CountdownTimer m_CheckIdleTimer; // 0x16a8	
	CountdownTimer m_CheckCheatersTimer; // 0x16c0	
private:
	[[maybe_unused]] uint8_t __pad16d8[0x1058]; // 0x16d8
public:
	// MNetworkEnable
	bool m_bServerPaused; // 0x2730	
private:
	[[maybe_unused]] uint8_t __pad2731[0x3]; // 0x2731
public:
	// MNetworkEnable
	int32_t m_iPauseTeam; // 0x2734	
	// MNetworkEnable
	int32_t m_nMatchClockUpdateTick; // 0x2738	
	// MNetworkEnable
	float m_flMatchClockAtLastUpdate; // 0x273c	
	double m_flPauseTime; // 0x2740	
	CPlayerSlot m_pausingPlayerId; // 0x2748	
	CPlayerSlot m_unpausingPlayerId; // 0x274c	
	float m_fPauseRawTime; // 0x2750	
	float m_fPauseCurTime; // 0x2754	
	float m_fUnpauseRawTime; // 0x2758	
	float m_fUnpauseCurTime; // 0x275c	
private:
	[[maybe_unused]] uint8_t __pad2760[0x50]; // 0x2760
public:
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal; // 0x27b0	
private:
	[[maybe_unused]] uint8_t __pad27b1[0x3]; // 0x27b1
public:
	GameTime_t m_flPreGameWaitEndTime; // 0x27b4	
	GameTime_t m_flReportCardDismissalWaitStart; // 0x27b8	
	int32_t m_nLastPreGameCount; // 0x27bc	
	// MNetworkEnable
	int32_t m_eGGTeam; // 0x27c0	
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime; // 0x27c4	
	// MNetworkEnable
	MatchID_t m_unMatchID; // 0x27c8	
	// MNetworkEnable
	int32_t m_nExperimentalGameplayState; // 0x27d0	
	int32_t m_nPlayerDeathEventID; // 0x27d4	
	int32_t m_nReplayChangedEvent; // 0x27d8	
	int32_t m_nGameOverEvent; // 0x27dc	
private:
	[[maybe_unused]] uint8_t __pad27e0[0x20]; // 0x27e0
public:
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime; // 0x2800	
};

