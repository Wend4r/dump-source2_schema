#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_QuickSilver_Watcher : public CCitadel_Modifier_BaseEventProc
{
private:
	[[maybe_unused]] uint8_t __pad0168[0xa8]; // 0x168
public:
	bool m_bProcNextHit; // 0x210	
};

