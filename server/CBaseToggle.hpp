#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
class CBaseToggle : public CBaseModelEntity
{
public:
	TOGGLE_STATE m_toggle_state; // 0x7c0	
	float m_flMoveDistance; // 0x7c4	
	float m_flWait; // 0x7c8	
	float m_flLip; // 0x7cc	
	bool m_bAlwaysFireBlockedOutputs; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	Vector m_vecPosition1; // 0x7d4	
	Vector m_vecPosition2; // 0x7e0	
	QAngle m_vecMoveAng; // 0x7ec	
	QAngle m_vecAngle1; // 0x7f8	
	QAngle m_vecAngle2; // 0x804	
	float m_flHeight; // 0x810	
	CHandle< CBaseEntity > m_hActivator; // 0x814	
	Vector m_vecFinalDest; // 0x818	
	QAngle m_vecFinalAngle; // 0x824	
	int32_t m_movementType; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	CUtlSymbolLarge m_sMaster; // 0x838	
};

