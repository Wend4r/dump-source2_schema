#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CBoneMaskUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0090[0x4]; // 0x90
public:
	int32_t m_nWeightListIndex; // 0x94	
	float m_flRootMotionBlend; // 0x98	
	BoneMaskBlendSpace m_blendSpace; // 0x9c	
	BinaryNodeChildOption m_footMotionTiming; // 0xa0	
	bool m_bUseBlendScale; // 0xa4	
private:
	[[maybe_unused]] uint8_t __pad00a5[0x3]; // 0xa5
public:
	AnimValueSource m_blendValueSource; // 0xa8	
	CAnimParamHandle m_hBlendParameter; // 0xac	
};

