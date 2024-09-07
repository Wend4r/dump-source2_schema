#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class ESOMsg : uint32_t
{
	k_ESOMsg_Create = 0x15,
	k_ESOMsg_Update = 0x16,
	k_ESOMsg_Destroy = 0x17,
	k_ESOMsg_CacheSubscribed = 0x18,
	k_ESOMsg_CacheUnsubscribed = 0x19,
	k_ESOMsg_UpdateMultiple = 0x1a,
	k_ESOMsg_CacheSubscriptionRefresh = 0x1c,
	k_ESOMsg_CacheSubscribedUpToDate = 0x1d,
};
