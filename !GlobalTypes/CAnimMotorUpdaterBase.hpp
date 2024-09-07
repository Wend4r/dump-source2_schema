#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x20
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimMotorUpdaterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlString m_name; // 0x10	
	bool m_bDefault; // 0x18	
};

