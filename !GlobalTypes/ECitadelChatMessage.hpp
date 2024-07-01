#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class ECitadelChatMessage : uint32_t
{
	CITADEL_CHAT_MESSAGE_UNPAUSE_COUNTDOWN = 0x1,
	CITADEL_CHAT_MESSAGE_UNPAUSED = 0x2,
	CITADEL_CHAT_MESSAGE_AUTO_UNPAUSED = 0x3,
	CITADEL_CHAT_MESSAGE_PAUSE_COUNTDOWN = 0x4,
	CITADEL_CHAT_MESSAGE_PAUSED = 0x5,
	CITADEL_CHAT_MESSAGE_YOUPAUSED = 0x6,
	CITADEL_CHAT_MESSAGE_CANTPAUSE = 0x7,
	CITADEL_CHAT_MESSAGE_CANTUNPAUSETEAM = 0x8,
	CITADEL_CHAT_MESSAGE_NOPAUSESLEFT = 0x9,
	CITADEL_CHAT_MESSAGE_CANTPAUSEYET = 0xa,
	CITADEL_CHAT_MESSAGE_PREGAME_COUNTDOWN = 0xb,
};

