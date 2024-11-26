#pragma once

#include <cstdint>

struct CEnvWindShared;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class CEnvWind : public CBaseEntity
{
public:
	// MNetworkEnable
	CEnvWindShared m_EnvWindShared; // 0x4e8	
	
	// Datamap fields:
	// int16_t m_EnvWindShared.m_iMinWind; // 0x4f8
	// int16_t m_EnvWindShared.m_iMaxWind; // 0x4fa
	// int32_t m_EnvWindShared.m_windRadius; // 0x4fc
	// int16_t m_EnvWindShared.m_iMinGust; // 0x500
	// int16_t m_EnvWindShared.m_iMaxGust; // 0x502
	// float m_EnvWindShared.m_flMinGustDelay; // 0x504
	// float m_EnvWindShared.m_flMaxGustDelay; // 0x508
	// int16_t m_EnvWindShared.m_iGustDirChange; // 0x510
	// float m_EnvWindShared.m_flGustDuration; // 0x50c
	// int32_t m_EnvWindShared.m_iWindDir; // 0x524
	// float m_EnvWindShared.m_flWindSpeed; // 0x528
	// void CEnvWindWindThink; // 0x0
};

