#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CWayPointHelperUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	float m_flStartCycle; // 0x74	
	float m_flEndCycle; // 0x78	
	bool m_bOnlyGoals; // 0x7c	
	bool m_bPreventOvershoot; // 0x7d	
	bool m_bPreventUndershoot; // 0x7e	
};

