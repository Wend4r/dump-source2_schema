#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
class C_EnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x8	
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_location; // 0x2c	
	int32_t m_iszGustSound; // 0x38	
	int32_t m_iWindDir; // 0x3c	
	float m_flWindSpeed; // 0x40	
	Vector m_currentWindVector; // 0x44	
	Vector m_CurrentSwayVector; // 0x50	
	Vector m_PrevSwayVector; // 0x5c	
	// MNetworkEnable
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	GameTime_t m_flVariationTime; // 0x70	
	GameTime_t m_flSwayTime; // 0x74	
	GameTime_t m_flSimTime; // 0x78	
	GameTime_t m_flSwitchTime; // 0x7c	
	float m_flAveWindSpeed; // 0x80	
	bool m_bGusting; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	float m_flWindAngleVariation; // 0x88	
	float m_flWindSpeedVariation; // 0x8c	
	CEntityIndex m_iEntIndex; // 0x90	
};
