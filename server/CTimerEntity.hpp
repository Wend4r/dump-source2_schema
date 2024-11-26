#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CTimerEntity : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTimer; // 0x4e8	
	CEntityIOOutput m_OnTimerHigh; // 0x510	
	CEntityIOOutput m_OnTimerLow; // 0x538	
	int32_t m_iDisabled; // 0x560	
	float m_flInitialDelay; // 0x564	
	float m_flRefireTime; // 0x568	
	bool m_bUpDownState; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	int32_t m_iUseRandomTime; // 0x570	
	bool m_bPauseAfterFiring; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
public:
	float m_flLowerRandomBound; // 0x578	
	float m_flUpperRandomBound; // 0x57c	
	float m_flRemainingTime; // 0x580	
	bool m_bPaused; // 0x584	
	
	// Datamap fields:
	// float InputRefireTime; // 0x0
	// void InputFireTimer; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// float InputAddToTimer; // 0x0
	// void InputResetTimer; // 0x0
	// float InputSubtractFromTimer; // 0x0
	// void InputPauseTimer; // 0x0
	// void InputUnpauseTimer; // 0x0
};

