#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa90
// Has VTable
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x990	
	CEntityIOOutput m_OnUnpressed; // 0x9b8	
	CEntityIOOutput m_OnFullyOpen; // 0x9e0	
	CEntityIOOutput m_OnFullyClosed; // 0xa08	
	CEntityIOOutput m_OnReachedPosition; // 0xa30	
	int32_t m_lastUsed; // 0xa58	
	QAngle m_start; // 0xa5c	
	QAngle m_end; // 0xa68	
	float m_IdealYaw; // 0xa74	
	CUtlSymbolLarge m_sNoise; // 0xa78	
	bool m_bUpdateTarget; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0a81[0x3]; // 0xa81
public:
	int32_t m_direction; // 0xa84	
	float m_returnSpeed; // 0xa88	
	float m_flStartPosition; // 0xa8c	
	
	// Datamap fields:
	// bool m_bSolidBsp; // 0x898
	// void CMomentaryRotButtonUseMoveDone; // 0x0
	// void CMomentaryRotButtonReturnMoveDone; // 0x0
	// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
	// void CMomentaryRotButtonUpdateThink; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetPositionImmediately; // 0x0
	// void InputDisableUpdateTarget; // 0x0
	// void InputEnableUpdateTarget; // 0x0
};

