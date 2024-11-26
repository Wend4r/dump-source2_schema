#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class EGCServerSignoutData : uint32_t
{
	k_EServerSignoutData_Disconnections = 0x2,
	k_EServerSignoutData_AccountStatChanges = 0x3,
	k_EServerSignoutData_DetailedStats = 0x4,
	k_EServerSignoutData_ServerPerfStats = 0x5,
	k_EServerSignoutData_PerfData = 0x6,
	k_EServerSignoutData_PlayerChat = 0x7,
	k_EServerSignoutData_BookRewards = 0x8,
	k_EServerSignoutData_PenalizedPlayers = 0x9,
	k_EServerSignoutData_ReportCheaters = 0xa,
};

