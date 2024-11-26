#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class TaskHandshakeScope_t : uint32_t
{
	eTask = 0x0,
	eSchedule = 0x1,
	eInvalid = 0x2,
};

