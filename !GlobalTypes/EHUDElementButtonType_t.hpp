#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EHUDElementButtonType_t : uint32_t
{
	EButtonHintType_SingleButton = 0x0,
	EButtonHintType_TwoDifferentButtons = 0x1,
	EButtonHintType_TwoButtonCombo = 0x2,
};

