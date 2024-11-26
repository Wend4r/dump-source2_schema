#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
class CJumpHelperUpdateNode : public CSequenceUpdateNode
{
public:
	CAnimParamHandle m_hTargetParam; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b2[0x2]; // 0xb2
public:
	Vector m_flOriginalJumpMovement; // 0xb4	
	float m_flOriginalJumpDuration; // 0xc0	
	float m_flJumpStartCycle; // 0xc4	
	float m_flJumpEndCycle; // 0xc8	
	JumpCorrectionMethod m_eCorrectionMethod; // 0xcc	
	bool m_bTranslationAxis[3]; // 0xd0	
	bool m_bScaleSpeed; // 0xd3	
};

