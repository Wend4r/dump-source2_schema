#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CKeepUpright : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	Vector m_worldGoalAxis; // 0x4f0	
	Vector m_localTestAxis; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
public:
	CUtlSymbolLarge m_nameAttach; // 0x510	
	CHandle< CBaseEntity > m_attachedObject; // 0x518	
	float m_angularLimit; // 0x51c	
	bool m_bActive; // 0x520	
	bool m_bDampAllRotation; // 0x521	
	
	// Datamap fields:
	// void m_pController; // 0x508
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetAngularLimit; // 0x0
};

