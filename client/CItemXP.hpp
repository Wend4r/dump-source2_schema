#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8f0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLaunch"
// MNetworkVarNames "GameTime_t m_flAttackableTime"
class CItemXP : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0858[0x64]; // 0x858
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLaunchTimeChanged"
	GameTime_t m_timeLaunch; // 0x8bc	
	// MNetworkEnable
	GameTime_t m_flAttackableTime; // 0x8c0	
};

