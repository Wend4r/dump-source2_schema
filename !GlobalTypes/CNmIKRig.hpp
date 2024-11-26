#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CNmIKRig
{
public:
	CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // 0x0	
	CUtlVector< CNmIKBody > m_vecBodies; // 0x8	
	CUtlVector< CNmIKJoint > m_vecJoints; // 0x20	
};

