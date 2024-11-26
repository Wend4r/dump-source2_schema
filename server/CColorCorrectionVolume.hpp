#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
// 
// MNetworkVarNames "float32 m_MaxWeight"
// MNetworkVarNames "float32 m_FadeDuration"
// MNetworkVarNames "float32 m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class CColorCorrectionVolume : public CBaseTrigger
{
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x980	
	// MNetworkEnable
	float m_FadeDuration; // 0x984	
	// MNetworkEnable
	float m_Weight; // 0x988	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x98c	
	float m_LastEnterWeight; // 0xb8c	
	GameTime_t m_LastEnterTime; // 0xb90	
	float m_LastExitWeight; // 0xb94	
	GameTime_t m_LastExitTime; // 0xb98	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
};

