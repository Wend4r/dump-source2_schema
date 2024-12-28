#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
class CTargetSelectorUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0078[0x4]; // 0x78
public:
	CAnimParamHandle m_hTargetPosition; // 0x7c	
	CAnimParamHandle m_hTargetFacePositionParameter; // 0x7e	
	bool m_bTargetPositionIsWorldSpace; // 0x80	
	bool m_bTargetFacePositionIsWorldSpace; // 0x81	
	bool m_bEnablePhaseMatching; // 0x82	
private:
	[[maybe_unused]] uint8_t __pad0083[0x1]; // 0x83
public:
	float m_flPhaseMatchingMaxRootMotionSkip; // 0x84	
};

