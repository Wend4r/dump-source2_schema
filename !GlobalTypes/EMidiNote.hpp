#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 13
// Alignment: 1
// Size: 0x1
enum class EMidiNote : uint8_t
{
	C = 0x0,
	C_Sharp = 0x1,
	D = 0x2,
	D_Sharp = 0x3,
	E = 0x4,
	F = 0x5,
	F_Sharp = 0x6,
	G = 0x7,
	G_Sharp = 0x8,
	A = 0x9,
	A_Sharp = 0xa,
	B = 0xb,
	Count = 0xc,
};
