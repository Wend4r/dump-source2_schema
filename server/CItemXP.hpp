#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x798
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLaunch"
class CItemXP : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0748[0x48]; // 0x748
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLaunchTimeChanged"
	GameTime_t m_timeLaunch; // 0x790	
};
