#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class CameraParamMode : uint32_t
{
	k_EParamMode_AllowInOneContext = 0x0,
	k_EParamMode_AllowInMultipleContexts = 0x1,
};

