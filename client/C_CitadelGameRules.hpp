#pragma once

#include <cstdint>

struct GameTime_t;
struct MatchID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9ee0
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
class C_CitadelGameRules : public C_TeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MNetworkEnable
	GameTime_t m_fLevelStartTime; // 0x5c	
	// MNetworkEnable
	GameTime_t m_flGameStartTime; // 0x60	
	// MNetworkEnable
	GameTime_t m_flRoundStartTime; // 0x64	
	// MNetworkEnable
	EGameState m_eGameState; // 0x68	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerAmber; // 0x6c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerSapphire; // 0x70	
	// MNetworkEnable
	bool m_bEnemyInAmberBase; // 0x74	
	// MNetworkEnable
	bool m_bEnemyInSapphireBase; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MNetworkEnable
	Vector m_vMinimapMins; // 0x78	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0x84	
	// MNetworkEnable
	bool m_bMatchSafeToAbandon; // 0x90	
	// MNetworkEnable
	bool m_bNoDeathEnabled; // 0x91	
	// MNetworkEnable
	bool m_bFastCooldownsEnabled; // 0x92	
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled; // 0x93	
	// MNetworkEnable
	bool m_bUnlimitedAmmoEnabled; // 0x94	
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled; // 0x95	
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked; // 0x96	
private:
	[[maybe_unused]] uint8_t __pad0097[0x1]; // 0x97
public:
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode; // 0x98	
	// MNetworkEnable
	ECitadelGameMode m_eGameMode; // 0x9c	
	// MNetworkEnable
	uint32_t m_unSpectatorCount; // 0xa0	
	// MNetworkEnable
	CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // 0xa4	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels; // 0xa8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine; // 0xac	
	bool m_bDontUploadStats; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b1[0x9d57]; // 0xb1
public:
	// MNetworkEnable
	bool m_bServerPaused; // 0x9e08	
private:
	[[maybe_unused]] uint8_t __pad9e09[0x3]; // 0x9e09
public:
	// MNetworkEnable
	int32_t m_iPauseTeam; // 0x9e0c	
	// MNetworkEnable
	int32_t m_nMatchClockUpdateTick; // 0x9e10	
	// MNetworkEnable
	float m_flMatchClockAtLastUpdate; // 0x9e14	
	double m_flPauseTime; // 0x9e18	
	CPlayerSlot m_pausingPlayerId; // 0x9e20	
	CPlayerSlot m_unpausingPlayerId; // 0x9e24	
	float m_fPauseRawTime; // 0x9e28	
	float m_fPauseCurTime; // 0x9e2c	
	float m_fUnpauseRawTime; // 0x9e30	
	float m_fUnpauseCurTime; // 0x9e34	
private:
	[[maybe_unused]] uint8_t __pad9e38[0x50]; // 0x9e38
public:
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal; // 0x9e88	
private:
	[[maybe_unused]] uint8_t __pad9e89[0x3]; // 0x9e89
public:
	GameTime_t m_flPreGameWaitEndTime; // 0x9e8c	
	GameTime_t m_flReportCardDismissalWaitStart; // 0x9e90	
	int32_t m_nLastPreGameCount; // 0x9e94	
	// MNetworkEnable
	int32_t m_eGGTeam; // 0x9e98	
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime; // 0x9e9c	
	// MNetworkEnable
	MatchID_t m_unMatchID; // 0x9ea0	
	// MNetworkEnable
	int32_t m_nExperimentalGameplayState; // 0x9ea8	
	int32_t m_nPlayerDeathEventID; // 0x9eac	
	int32_t m_nReplayChangedEvent; // 0x9eb0	
	int32_t m_nGameOverEvent; // 0x9eb4	
private:
	[[maybe_unused]] uint8_t __pad9eb8[0x20]; // 0x9eb8
public:
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime; // 0x9ed8	
};

