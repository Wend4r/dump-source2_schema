#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0be8[0x8]; // 0xbe8
public:
	bool m_bCreateNavObstacle; // 0xbf0	
	bool m_bNavObstacleUpdatesOverridden; // 0xbf1	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xbf2	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xbf3	
private:
	[[maybe_unused]] uint8_t __pad0bf4[0x4]; // 0xbf4
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xbf8	
	CEntityIOOutput m_pOutputAnimOver; // 0xc20	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc48	
	CEntityIOOutput m_OnAnimReachedStart; // 0xc70	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xc98	
	CUtlSymbolLarge m_iszIdleAnim; // 0xcc0	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcc8	
	bool m_bRandomizeCycle; // 0xccc	
	bool m_bStartDisabled; // 0xccd	
	bool m_bFiredStartEndOutput; // 0xcce	
	bool m_bForceNpcExclude; // 0xccf	
	bool m_bCreateNonSolid; // 0xcd0	
	bool m_bIsOverrideProp; // 0xcd1	
private:
	[[maybe_unused]] uint8_t __pad0cd2[0x2]; // 0xcd2
public:
	int32_t m_iInitialGlowState; // 0xcd4	
	int32_t m_nGlowRange; // 0xcd8	
	int32_t m_nGlowRangeMin; // 0xcdc	
	Color m_glowColor; // 0xce0	
	int32_t m_nGlowTeam; // 0xce4	
	
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
	// void CDynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};

