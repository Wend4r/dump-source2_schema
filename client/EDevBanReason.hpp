#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EDevBanReason : uint32_t
{
	k_eDevBanReason_Unspecified = 0x0,
	k_eDevBanReason_AimAssist = 0x1,
	k_eDevBanReason_VisionAssist = 0x2,
	k_eDevBanReason_MovementAssist = 0x3,
};

