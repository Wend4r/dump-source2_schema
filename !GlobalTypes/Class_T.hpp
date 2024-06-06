#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class Class_T : uint32_t
{
	CLASS_NONE = 0x0,
	CLASS_PLAYER = 0x1,
	CLASS_PLAYER_ALLY = 0x2,
	CLASS_BOMB = 0x3,
	CLASS_FOOT_CONTACT_SHADOW = 0x4,
	CLASS_WEAPON = 0x5,
	CLASS_WATER_SPLASHER = 0x6,
	CLASS_WEAPON_VIEWMODEL = 0x7,
	CLASS_DOOR = 0x8,
	NUM_CLASSIFY_CLASSES = 0x9,
};

