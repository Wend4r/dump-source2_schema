#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderNormal"
// MNetworkVarNames "int m_nLadderSurfacePropIndex"
// MNetworkVarNames "float m_flDuckAmount"
// MNetworkVarNames "float m_flDuckSpeed"
// MNetworkVarNames "bool m_bDuckOverride"
// MNetworkVarNames "bool m_bDesiresDuck"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float m_flLastDuckTime"
// MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
// MNetworkVarNames "bool m_bOldJumpPressed"
// MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
// MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
// MNetworkVarNames "float m_flOffsetTickCompleteTime"
// MNetworkVarNames "float m_flOffsetTickStashedSpeed"
// MNetworkVarNames "float m_flStamina"
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0x218	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x224	
	// MNetworkEnable
	float m_flDuckAmount; // 0x228	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x22c	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x230	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	float m_flDuckOffset; // 0x234	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x238	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x23c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x240	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x244	
private:
	[[maybe_unused]] uint8_t __pad0248[0x8]; // 0x248
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x250	
	bool m_duckUntilOnGround; // 0x258	
	bool m_bHasWalkMovedSinceLastJump; // 0x259	
	bool m_bInStuckTest; // 0x25a	
private:
	[[maybe_unused]] uint8_t __pad025b[0xd]; // 0x25b
public:
	float m_flStuckCheckTime[2][64]; // 0x268	
	int32_t m_nTraceCount; // 0x468	
	int32_t m_StuckLast; // 0x46c	
	bool m_bSpeedCropped; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0471[0x3]; // 0x471
public:
	float m_flGroundMoveEfficiency; // 0x474	
	int32_t m_nOldWaterLevel; // 0x478	
	float m_flWaterEntryTime; // 0x47c	
	Vector m_vecForward; // 0x480	
	Vector m_vecLeft; // 0x48c	
	Vector m_vecUp; // 0x498	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4a4	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4a8	
private:
	[[maybe_unused]] uint8_t __pad04a9[0x3]; // 0x4a9
public:
	float m_flJumpPressedTime; // 0x4ac	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x4]; // 0x4b4
public:
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4b8	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4c0	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4c4	
	// MNetworkEnable
	float m_flStamina; // 0x4c8	
	float m_flHeightAtJumpStart; // 0x4cc	
	float m_flMaxJumpHeightThisJump; // 0x4d0	
	float m_flMaxJumpHeightLastJump; // 0x4d4	
	float m_flStaminaAtJumpStart; // 0x4d8	
	float m_flAccumulatedJumpError; // 0x4dc	
};

