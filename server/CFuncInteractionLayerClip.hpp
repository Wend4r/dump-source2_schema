#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
// Has VTable
class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x7]; // 0x769
public:
	CUtlSymbolLarge m_iszInteractsAs; // 0x770	
	CUtlSymbolLarge m_iszInteractsWith; // 0x778	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

