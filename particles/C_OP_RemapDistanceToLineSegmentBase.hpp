#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x1b8	
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x1bc	
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x1c0	
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x1c4	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x1c8	
};

