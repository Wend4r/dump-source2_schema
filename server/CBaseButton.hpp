#pragma once

#include <cstdint>

struct locksound_t;
struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class CBaseButton : public CBaseToggle
{
public:
	QAngle m_angMoveEntitySpace; // 0x838	
	bool m_fStayPushed; // 0x844	
	bool m_fRotating; // 0x845	
private:
	[[maybe_unused]] uint8_t __pad0846[0x2]; // 0x846
public:
	locksound_t m_ls; // 0x848	
	CUtlSymbolLarge m_sUseSound; // 0x868	
	CUtlSymbolLarge m_sLockedSound; // 0x870	
	CUtlSymbolLarge m_sUnlockedSound; // 0x878	
	CUtlSymbolLarge m_sOverrideAnticipationName; // 0x880	
	bool m_bLocked; // 0x888	
	bool m_bDisabled; // 0x889	
private:
	[[maybe_unused]] uint8_t __pad088a[0x2]; // 0x88a
public:
	GameTime_t m_flUseLockedTime; // 0x88c	
	bool m_bSolidBsp; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0891[0x7]; // 0x891
public:
	CEntityIOOutput m_OnDamaged; // 0x898	
	CEntityIOOutput m_OnPressed; // 0x8c0	
	CEntityIOOutput m_OnUseLocked; // 0x8e8	
	CEntityIOOutput m_OnIn; // 0x910	
	CEntityIOOutput m_OnOut; // 0x938	
	int32_t m_nState; // 0x960	
	CEntityHandle m_hConstraint; // 0x964	
	CEntityHandle m_hConstraintParent; // 0x968	
	bool m_bForceNpcExclude; // 0x96c	
private:
	[[maybe_unused]] uint8_t __pad096d[0x3]; // 0x96d
public:
	CUtlSymbolLarge m_sGlowEntity; // 0x970	
	// MNetworkEnable
	CHandle< CBaseModelEntity > m_glowEntity; // 0x978	
	// MNetworkEnable
	bool m_usable; // 0x97c	
private:
	[[maybe_unused]] uint8_t __pad097d[0x3]; // 0x97d
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x980	
	
	// Datamap fields:
	//  m_ls.sLockedSound; // 0x850
	//  m_ls.sUnlockedSound; // 0x858
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

