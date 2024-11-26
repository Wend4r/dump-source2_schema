#pragma once

#include <cstdint>

struct FootPinningPoseOpFixedData_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CFootPinningUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x78	
	FootPinningTimingSource m_eTimingSource; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x4]; // 0xac
public:
	CUtlVector< CAnimParamHandle > m_params; // 0xb0	
	bool m_bResetChild; // 0xc8	
};

