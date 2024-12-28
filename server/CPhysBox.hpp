#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CPhysBox : public CBreakable
{
public:
	int32_t m_damageType; // 0x890	
	int32_t m_damageToEnableMotion; // 0x894	
	float m_flForceToEnableMotion; // 0x898	
	QAngle m_angPreferredCarryAngles; // 0x89c	
	bool m_bNotSolidToWorld; // 0x8a8	
	bool m_bEnableUseOutput; // 0x8a9	
private:
	[[maybe_unused]] uint8_t __pad08aa[0x2]; // 0x8aa
public:
	int32_t m_iExploitableByPlayer; // 0x8ac	
	float m_flTouchOutputPerEntityDelay; // 0x8b0	
private:
	[[maybe_unused]] uint8_t __pad08b4[0x4]; // 0x8b4
public:
	CEntityIOOutput m_OnDamaged; // 0x8b8	
	CEntityIOOutput m_OnAwakened; // 0x8e0	
	CEntityIOOutput m_OnMotionEnabled; // 0x908	
	CEntityIOOutput m_OnPlayerUse; // 0x930	
	CEntityIOOutput m_OnStartTouch; // 0x958	
	CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x980	
	
	// Datamap fields:
	// void InputWake; // 0x0
	// void InputSleep; // 0x0
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputForceDrop; // 0x0
	// void InputDisableFloating; // 0x0
};

