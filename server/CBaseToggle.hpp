#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x7b8	
	float m_flMoveDistance; // 0x7bc	
	float m_flWait; // 0x7c0	
	float m_flLip; // 0x7c4	
	bool m_bAlwaysFireBlockedOutputs; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07c9[0x3]; // 0x7c9
public:
	Vector m_vecPosition1; // 0x7cc	
	Vector m_vecPosition2; // 0x7d8	
	QAngle m_vecMoveAng; // 0x7e4	
	QAngle m_vecAngle1; // 0x7f0	
	QAngle m_vecAngle2; // 0x7fc	
	float m_flHeight; // 0x808	
	CHandle< CBaseEntity > m_hActivator; // 0x80c	
	Vector m_vecFinalDest; // 0x810	
	QAngle m_vecFinalAngle; // 0x81c	
	int32_t m_movementType; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	CUtlSymbolLarge m_sMaster; // 0x830	
};

