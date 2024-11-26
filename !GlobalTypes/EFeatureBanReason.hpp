#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EFeatureBanReason : uint32_t
{
	k_eFeatureBanReason_Invalid = 0x0,
	k_eFeatureBanReason_DevCommand = 0x1,
	k_eFeatureBanReason_PlayerReports = 0x2,
	k_eFeatureBanReason_MatchAbandons = 0x3,
	k_eFeatureBanReason_ExcessivePlayerReports = 0x4,
};

