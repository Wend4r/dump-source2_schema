#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EQuickCastMode : uint32_t
{
	EQuickCast_Default = 0x0,
	EQuickCast_Enabled = 0x1,
	EQuickCast_Disable = 0x2,
	EQuickCast_OnMouseUp = 0x3,
	EQuickMaxValue = 0x3,
};

