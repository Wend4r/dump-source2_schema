#pragma once

#include <cstdint>

struct GameTime_t;
struct SatVolumeIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x300
// Has VTable
class CCitadel_Modifier_StormCloud : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x8]; // 0xc0
public:
	float m_flDamageInterval; // 0xc8	
	bool m_bGrowing; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00cd[0x3]; // 0xcd
public:
	GameTime_t m_flLastDamageWaveTime; // 0xd0	
	int32_t m_nNumPlayersKilled; // 0xd4	
	GameTime_t m_flNextRandomLightningStrike; // 0xd8	
	GameTime_t m_flStartTime; // 0xdc	
	float m_flRadiusIncrementPerSecond; // 0xe0	
	Vector m_vCastPosition; // 0xe4	
	bool m_bFiredEndingSoonSound; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f1[0x3]; // 0xf1
public:
	int32_t m_nLastTickForLightningCenterCalc; // 0xf4	
	Vector m_vecLightningCenter; // 0xf8	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0x104	
};

