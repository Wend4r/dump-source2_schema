#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MNetworkVarNames "bool m_bTimerPaused"
// MNetworkVarNames "float m_flTimeRemaining"
// MNetworkVarNames "GameTime_t m_flTimerEndTime"
// MNetworkVarNames "bool m_bIsDisabled"
// MNetworkVarNames "bool m_bShowInHUD"
// MNetworkVarNames "int m_nTimerLength"
// MNetworkVarNames "int m_nTimerInitialLength"
// MNetworkVarNames "int m_nTimerMaxLength"
// MNetworkVarNames "bool m_bAutoCountdown"
// MNetworkVarNames "int m_nSetupTimeLength"
// MNetworkVarNames "int m_nState"
// MNetworkVarNames "bool m_bStartPaused"
// MNetworkVarNames "bool m_bInCaptureWatchState"
// MNetworkVarNames "float m_flTotalTime"
// MNetworkVarNames "bool m_bStopWatchTimer"
class C_TeamRoundTimer : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x564	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x568	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x56c	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x56d	
private:
	[[maybe_unused]] uint8_t __pad056e[0x2]; // 0x56e
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x570	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x574	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x578	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x57c	
private:
	[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x580	
	// MNetworkEnable
	int32_t m_nState; // 0x584	
	// MNetworkEnable
	bool m_bStartPaused; // 0x588	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x589	
private:
	[[maybe_unused]] uint8_t __pad058a[0x2]; // 0x58a
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x58c	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x590	
	bool m_bFireFinished; // 0x591	
	bool m_bFire5MinRemain; // 0x592	
	bool m_bFire4MinRemain; // 0x593	
	bool m_bFire3MinRemain; // 0x594	
	bool m_bFire2MinRemain; // 0x595	
	bool m_bFire1MinRemain; // 0x596	
	bool m_bFire30SecRemain; // 0x597	
	bool m_bFire10SecRemain; // 0x598	
	bool m_bFire5SecRemain; // 0x599	
	bool m_bFire4SecRemain; // 0x59a	
	bool m_bFire3SecRemain; // 0x59b	
	bool m_bFire2SecRemain; // 0x59c	
	bool m_bFire1SecRemain; // 0x59d	
private:
	[[maybe_unused]] uint8_t __pad059e[0x2]; // 0x59e
public:
	int32_t m_nOldTimerLength; // 0x5a0	
	int32_t m_nOldTimerState; // 0x5a4	
};

