#pragma once

#include <cstdint>

struct RnCapsule_t;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vCenter[2] - 0x20
	// -> m_flRadius - 0x38
	RnCapsule_t m_Capsule; // 0x20	
};

