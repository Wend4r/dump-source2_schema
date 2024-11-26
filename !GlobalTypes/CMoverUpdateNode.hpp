#pragma once

#include <cstdint>

struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
class CMoverUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	CAnimInputDamping m_damping; // 0x78	
	AnimValueSource m_facingTarget; // 0x88	
	CAnimParamHandle m_hMoveVecParam; // 0x8c	
	CAnimParamHandle m_hMoveHeadingParam; // 0x8e	
	CAnimParamHandle m_hTurnToFaceParam; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0092[0x2]; // 0x92
public:
	float m_flTurnToFaceOffset; // 0x94	
	float m_flTurnToFaceLimit; // 0x98	
	bool m_bAdditive; // 0x9c	
	bool m_bApplyMovement; // 0x9d	
	bool m_bOrientMovement; // 0x9e	
	bool m_bApplyRotation; // 0x9f	
	bool m_bLimitOnly; // 0xa0	
};

