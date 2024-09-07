#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class CitadelChatWheelQuickResponseTypes_t : uint32_t
{
	CITADEL_QUICK_RESPONSE_NONE = 0xffffffffffffffff,
	CITADEL_QUICK_RESPONSE_DEFAULT = 0x0,
	CITADEL_QUICK_RESPONSE_THANKS = 0x0,
	CITADEL_QUICK_RESPONSE_YES = 0x1,
	CITADEL_QUICK_RESPONSE_YES_NO = 0x2,
	CITADEL_QUICK_RESPONSE_HEALING = 0x3,
	CITADEL_QUICK_RESPONSE_SHOP_OR_DEFEND = 0x4,
	CITADEL_QUICK_RESPONSE_HEADING_TO_LANE = 0x5,
	CITADEL_QUICK_RESPONSE_GOOD_JOB = 0x6,
	CITADEL_QUICK_RESPONSE_GREAT_KILL = 0x7,
	CITADEL_QUICK_RESPONSE_UH_OH = 0x8,
	// MPropertySuppressEnumerator
	CITADEL_QUICK_RESPONSE_COUNT = 0x9,
};

