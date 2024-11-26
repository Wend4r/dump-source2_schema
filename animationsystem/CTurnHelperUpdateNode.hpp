#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
class CTurnHelperUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	AnimValueSource m_facingTarget; // 0x74	
	float m_turnStartTimeOffset; // 0x78	
	float m_turnDuration; // 0x7c	
	bool m_bMatchChildDuration; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	float m_manualTurnOffset; // 0x84	
	bool m_bUseManualTurnOffset; // 0x88	
};

