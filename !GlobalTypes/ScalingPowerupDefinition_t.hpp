#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ScalingPowerupDefinition_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	EModifierValue m_eModifierValue; // 0x8	
	float m_valueMin; // 0xc	
	float m_valueMax; // 0x10	
};

