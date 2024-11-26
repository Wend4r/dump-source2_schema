#pragma once

#include <cstdint>

struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CFollowPathUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	float m_flBlendOutTime; // 0x74	
	bool m_bBlockNonPathMovement; // 0x78	
	bool m_bStopFeetAtGoal; // 0x79	
	bool m_bScaleSpeed; // 0x7a	
private:
	[[maybe_unused]] uint8_t __pad007b[0x1]; // 0x7b
public:
	float m_flScale; // 0x7c	
	float m_flMinAngle; // 0x80	
	float m_flMaxAngle; // 0x84	
	float m_flSpeedScaleBlending; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CAnimInputDamping m_turnDamping; // 0x90	
	AnimValueSource m_facingTarget; // 0xa0	
	CAnimParamHandle m_hParam; // 0xa4	
private:
	[[maybe_unused]] uint8_t __pad00a6[0x2]; // 0xa6
public:
	float m_flTurnToFaceOffset; // 0xa8	
	bool m_bTurnToFace; // 0xac	
};

