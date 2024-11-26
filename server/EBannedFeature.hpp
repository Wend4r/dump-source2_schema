#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EBannedFeature : uint32_t
{
	k_eBannedFeature_Invalid = 0x0,
	k_eBannedFeature_LowPriorityMatchmaking = 0x1,
	k_eBannedFeature_CommsRestricted = 0x2,
	k_eBannedFeature_ReportingDisabled = 0x3,
};

