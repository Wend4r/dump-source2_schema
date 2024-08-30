#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x768	
	CEntityIOOutput m_OnEndTouch; // 0x790	
	CEntityIOOutput m_OnUse; // 0x7b8	
	int32_t m_iInputFilter; // 0x7e0	
	int32_t m_iDontMessageParent; // 0x7e4	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

