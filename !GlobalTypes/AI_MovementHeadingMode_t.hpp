#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class AI_MovementHeadingMode_t : uint32_t
{
	eContinuous = 0x0,
	eDiscretized_180 = 0x1,
	eDiscretized_90 = 0x2,
	eDiscretized_45 = 0x3,
};

