#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

