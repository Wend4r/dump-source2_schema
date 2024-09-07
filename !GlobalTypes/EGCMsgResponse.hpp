#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class EGCMsgResponse : uint32_t
{
	k_EGCMsgResponseOK = 0x0,
	k_EGCMsgResponseDenied = 0x1,
	k_EGCMsgResponseServerError = 0x2,
	k_EGCMsgResponseTimeout = 0x3,
	k_EGCMsgResponseInvalid = 0x4,
	k_EGCMsgResponseNoMatch = 0x5,
	k_EGCMsgResponseUnknownError = 0x6,
	k_EGCMsgResponseNotLoggedOn = 0x7,
	k_EGCMsgFailedToCreate = 0x8,
};

