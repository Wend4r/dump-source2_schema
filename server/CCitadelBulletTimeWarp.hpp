#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MNetworkVarNames "float m_flBulletTimeScale"
// MNetworkVarNames "float m_flProjectileTimeScale"
// MNetworkVarNames "GameTime_t m_flExpireTime"
// MNetworkVarNames "float m_flStopDuration"
class CCitadelBulletTimeWarp : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flBulletTimeScale; // 0x7b8	
	// MNetworkEnable
	float m_flProjectileTimeScale; // 0x7bc	
	// MNetworkEnable
	GameTime_t m_flExpireTime; // 0x7c0	
	// MNetworkEnable
	float m_flStopDuration; // 0x7c4	
};

