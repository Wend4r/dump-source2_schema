#pragma once

#include <cstdint>

struct FollowTargetOpFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
class CFollowTargetUpdateNode : public CUnaryUpdateNode
{
public:
	// -> m_boneIndex - 0x70
	// -> m_bBoneTarget - 0x74
	// -> m_boneTargetIndex - 0x78
	// -> m_bWorldCoodinateTarget - 0x7c
	// -> m_bMatchTargetOrientation - 0x7d
	FollowTargetOpFixedSettings_t m_opFixedData; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0080[0x8]; // 0x80
public:
	CAnimParamHandle m_hParameterPosition; // 0x88	
	CAnimParamHandle m_hParameterOrientation; // 0x8a	
};

