#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CTargetWarpUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	CAnimParamHandle m_hTargetPositionParameter; // 0x74	
	CAnimParamHandle m_hTargetUpVectorParameter; // 0x76	
	CAnimParamHandle m_hTargetFacePositionParameter; // 0x78	
	bool m_bTargetFacePositionIsWorldSpace; // 0x7a	
	bool m_bTargetPositionIsWorldSpace; // 0x7b	
};

