#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xc80	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xc81	
private:
	[[maybe_unused]] uint8_t __pad0c82[0x6]; // 0xc82
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xc88	
	CEntityIOOutput m_pOutputAnimOver; // 0xcb0	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xcd8	
	CEntityIOOutput m_OnAnimReachedStart; // 0xd00	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xd28	
	CUtlSymbolLarge m_iszIdleAnim; // 0xd50	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xd58	
	bool m_bRandomizeCycle; // 0xd5c	
	bool m_bStartDisabled; // 0xd5d	
	bool m_bFiredStartEndOutput; // 0xd5e	
	bool m_bForceNpcExclude; // 0xd5f	
	bool m_bCreateNonSolid; // 0xd60	
	bool m_bIsOverrideProp; // 0xd61	
private:
	[[maybe_unused]] uint8_t __pad0d62[0x2]; // 0xd62
public:
	int32_t m_iInitialGlowState; // 0xd64	
	int32_t m_nGlowRange; // 0xd68	
	int32_t m_nGlowRangeMin; // 0xd6c	
	Color m_glowColor; // 0xd70	
	int32_t m_nGlowTeam; // 0xd74	
	int32_t m_iCachedFrameCount; // 0xd78	
	Vector m_vecCachedRenderMins; // 0xd7c	
	Vector m_vecCachedRenderMaxs; // 0xd88	
	
	// Datamap fields:
	// CUtlSymbolLarge StartingAnim; // 0x7fffffff
	// CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
	// CUtlSymbolLarge InputSetAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimation; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimation; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableCollision; // 0x0
	// void InputDisableCollision; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// void C_DynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};

