#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
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
	Vector m_vecLadderNormal; // 0x228	
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; // 0x234	
	// MNetworkEnable
	float m_flDuckAmount; // 0x238	
	// MNetworkEnable
	float m_flDuckSpeed; // 0x23c	
	// MNetworkEnable
	bool m_bDuckOverride; // 0x240	
	// MNetworkEnable
	bool m_bDesiresDuck; // 0x241	
private:
	[[maybe_unused]] uint8_t __pad0242[0x2]; // 0x242
public:
	float m_flDuckOffset; // 0x244	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; // 0x248	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; // 0x24c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; // 0x250	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; // 0x254	
private:
	[[maybe_unused]] uint8_t __pad0258[0x8]; // 0x258
public:
	Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x260	
	bool m_duckUntilOnGround; // 0x268	
	bool m_bHasWalkMovedSinceLastJump; // 0x269	
	bool m_bInStuckTest; // 0x26a	
private:
	[[maybe_unused]] uint8_t __pad026b[0xd]; // 0x26b
public:
	float m_flStuckCheckTime[2][64]; // 0x278	
	int32_t m_nTraceCount; // 0x478	
	int32_t m_StuckLast; // 0x47c	
	bool m_bSpeedCropped; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0481[0x3]; // 0x481
public:
	float m_flGroundMoveEfficiency; // 0x484	
	int32_t m_nOldWaterLevel; // 0x488	
	float m_flWaterEntryTime; // 0x48c	
	Vector m_vecForward; // 0x490	
	Vector m_vecLeft; // 0x49c	
	Vector m_vecUp; // 0x4a8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4b4	
	bool m_bMadeFootstepNoise; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	int32_t m_iFootsteps; // 0x4bc	
	// MNetworkEnable
	bool m_bOldJumpPressed; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flJumpPressedTime; // 0x4c4	
	// MNetworkEnable
	GameTime_t m_fStashGrenadeParameterWhen; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MNetworkEnable
	uint64_t m_nButtonDownMaskPrev; // 0x4d0	
	// MNetworkEnable
	float m_flOffsetTickCompleteTime; // 0x4d8	
	// MNetworkEnable
	float m_flOffsetTickStashedSpeed; // 0x4dc	
	// MNetworkEnable
	float m_flStamina; // 0x4e0	
	float m_flHeightAtJumpStart; // 0x4e4	
	float m_flMaxJumpHeightThisJump; // 0x4e8	
	float m_flMaxJumpHeightLastJump; // 0x4ec	
	float m_flStaminaAtJumpStart; // 0x4f0	
	float m_flAccumulatedJumpError; // 0x4f4	
};

