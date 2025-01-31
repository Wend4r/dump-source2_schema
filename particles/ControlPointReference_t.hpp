#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_controlPointNameString; // 0x0	
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffsetFromControlPoint; // 0x4	
	// MPropertyFriendlyName "Use local space offset"
	bool m_bOffsetInLocalSpace; // 0x10	
};

