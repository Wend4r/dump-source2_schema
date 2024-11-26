#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d8
// Has VTable
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c1[0x7]; // 0x7c1
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x7c8	
	CUtlSymbolLarge m_iszInteractsWith; // 0x7d0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

