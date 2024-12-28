#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x7b8	
	CEntityIOOutput m_OnEndTouch; // 0x7e0	
	CEntityIOOutput m_OnUse; // 0x808	
	int32_t m_iInputFilter; // 0x830	
	int32_t m_iDontMessageParent; // 0x834	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

