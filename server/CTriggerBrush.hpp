#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x7c0	
	CEntityIOOutput m_OnEndTouch; // 0x7e8	
	CEntityIOOutput m_OnUse; // 0x810	
	int32_t m_iInputFilter; // 0x838	
	int32_t m_iDontMessageParent; // 0x83c	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

