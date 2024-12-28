#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
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
	float m_MaxWeight; // 0x978	
	// MNetworkEnable
	float m_FadeDuration; // 0x97c	
	// MNetworkEnable
	float m_Weight; // 0x980	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x984	
	float m_LastEnterWeight; // 0xb84	
	GameTime_t m_LastEnterTime; // 0xb88	
	float m_LastExitWeight; // 0xb8c	
	GameTime_t m_LastExitTime; // 0xb90	
	
	// Datamap fields:
	// void CColorCorrectionVolumeThinkFunc; // 0x0
};

