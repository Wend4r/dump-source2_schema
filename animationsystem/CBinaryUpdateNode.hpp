#pragma once

#include <cstdint>

struct CAnimUpdateNodeRef;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CBinaryUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CAnimUpdateNodeRef m_pChild1; // 0x60	
	CAnimUpdateNodeRef m_pChild2; // 0x70	
	BinaryNodeTiming m_timingBehavior; // 0x80	
	float m_flTimingBlend; // 0x84	
	bool m_bResetChild1; // 0x88	
	bool m_bResetChild2; // 0x89	
};

