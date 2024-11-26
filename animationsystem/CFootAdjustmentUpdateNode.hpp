#pragma once

#include <cstdint>

struct CPoseHandle;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CFootAdjustmentUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	CUtlVector< HSequence > m_clips; // 0x78	
	CPoseHandle m_hBasePoseCacheHandle; // 0x90	
	CAnimParamHandle m_facingTarget; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0096[0x2]; // 0x96
public:
	float m_flTurnTimeMin; // 0x98	
	float m_flTurnTimeMax; // 0x9c	
	float m_flStepHeightMax; // 0xa0	
	float m_flStepHeightMaxAngle; // 0xa4	
	bool m_bResetChild; // 0xa8	
	bool m_bAnimationDriven; // 0xa9	
};

