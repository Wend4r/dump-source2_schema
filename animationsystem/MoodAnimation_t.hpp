#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
// MPropertyArrayElementNameKey "m_sName"
struct MoodAnimation_t
{
public:
	// MPropertyDescription "Name of the animation"
	// MPropertyAttributeEditor "VDataModelAnim( m_sModelName; include_deltas )"
	CUtlString m_sName; // 0x0	
	// MPropertyDescription "Weight of the animation, higher numbers get picked more"
	float m_flWeight; // 0x8	
};

