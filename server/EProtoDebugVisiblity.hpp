#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EProtoDebugVisiblity : uint32_t
{
	k_EProtoDebugVisibility_Always = 0x0,
	k_EProtoDebugVisibility_Server = 0x46,
	k_EProtoDebugVisibility_ValveServer = 0x50,
	k_EProtoDebugVisibility_GC = 0x5a,
	k_EProtoDebugVisibility_Never = 0x64,
};

