#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class COrientationWarpUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	AnimValueSource m_eTarget; // 0x74	
	CAnimParamHandle m_hTargetParam; // 0x78	
	CAnimParamHandle m_hTargetPositionParam; // 0x7a	
	OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x7c	
	float m_flTargetOffset; // 0x80	
	CAnimParamHandle m_hTargetOffsetParam; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0086[0x2]; // 0x86
public:
	CAnimInputDamping m_damping; // 0x88	
	OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0x98	
	float m_flMaxRootMotionScale; // 0x9c	
	bool m_bEnablePreferredRotationDirection; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a1[0x3]; // 0xa1
public:
	AnimValueSource m_ePreferredRotationDirection; // 0xa4	
	float m_flPreferredRotationThreshold; // 0xa8	
};

