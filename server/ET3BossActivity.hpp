#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ET3BossActivity : uint32_t
{
	IdleShielded = 0x0,
	Idle = 0x1,
	Moving = 0x2,
	ElectricBeamWindup = 0x3,
	ElectricBeamShoot = 0x4,
	BecomingWeakenedLoop = 0x5,
	Weakened = 0x6,
};

