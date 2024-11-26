#pragma once

#include <cstdint>

struct locksound_t;
struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x990
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x840	
	bool m_fStayPushed; // 0x84c	
	bool m_fRotating; // 0x84d	
private:
	[[maybe_unused]] uint8_t __pad084e[0x2]; // 0x84e
public:
	locksound_t m_ls; // 0x850	
	CUtlSymbolLarge m_sUseSound; // 0x870	
	CUtlSymbolLarge m_sLockedSound; // 0x878	
	CUtlSymbolLarge m_sUnlockedSound; // 0x880	
	CUtlSymbolLarge m_sOverrideAnticipationName; // 0x888	
	bool m_bLocked; // 0x890	
	bool m_bDisabled; // 0x891	
private:
	[[maybe_unused]] uint8_t __pad0892[0x2]; // 0x892
public:
	GameTime_t m_flUseLockedTime; // 0x894	
	bool m_bSolidBsp; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x7]; // 0x899
public:
	CEntityIOOutput m_OnDamaged; // 0x8a0	
	CEntityIOOutput m_OnPressed; // 0x8c8	
	CEntityIOOutput m_OnUseLocked; // 0x8f0	
	CEntityIOOutput m_OnIn; // 0x918	
	CEntityIOOutput m_OnOut; // 0x940	
	int32_t m_nState; // 0x968	
	CEntityHandle m_hConstraint; // 0x96c	
	CEntityHandle m_hConstraintParent; // 0x970	
	bool m_bForceNpcExclude; // 0x974	
private:
	[[maybe_unused]] uint8_t __pad0975[0x3]; // 0x975
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x978	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x980	
	// MNetworkEnable
	bool m_usable; // 0x984	
private:
	[[maybe_unused]] uint8_t __pad0985[0x3]; // 0x985
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x988	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x858
	//  m_ls.sUnlockedSound; // 0x860
	// void CBaseButtonButtonTouch; // 0x0
	// void CBaseButtonButtonSpark; // 0x0
	// void CBaseButtonTriggerAndWait; // 0x0
	// void CBaseButtonButtonReturn; // 0x0
	// void CBaseButtonButtonBackHome; // 0x0
	// void CBaseButtonButtonUse; // 0x0
	// void CBaseButtonActivateTouch; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPress; // 0x0
	// void InputPressIn; // 0x0
	// void InputPressOut; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlString displaytext; // 0x7fffffff
};

