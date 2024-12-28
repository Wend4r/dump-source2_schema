#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbc8
// Has VTable
// 
// MNetworkVarNames "int m_nNumStacks"
class CItem_RestorativeLocket : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0xa8]; // 0xb18
public:
	// MNetworkEnable
	int32_t m_nNumStacks; // 0xbc0	
};

