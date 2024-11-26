#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLaunch"
// MNetworkVarNames "GameTime_t m_flAttackableTime"
class CItemXP : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07c0[0x54]; // 0x7c0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLaunchTimeChanged"
	GameTime_t m_timeLaunch; // 0x814	
	// MNetworkEnable
	GameTime_t m_flAttackableTime; // 0x818	
};

