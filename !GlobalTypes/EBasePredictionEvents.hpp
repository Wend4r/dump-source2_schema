#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class EBasePredictionEvents : uint32_t
{
	BPE_StringCommand = 0x80,
	BPE_Teleport = 0x82,
};

