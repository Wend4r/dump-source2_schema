#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class ECatStatueState_t : uint8_t
{
	ECatStatue_None = 0x0,
	ECatStatue_Shoulder = 0x1,
	ECatStatue_ProjectileOut = 0x2,
	ECatStatue_InWorld = 0x3,
	ECatStatue_InCooldown = 0x4,
};

