#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbc0
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float m_MaxWeight"
// MNetworkVarNames "float m_FadeDuration"
// MNetworkVarNames "float m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:
	float m_LastEnterWeight; // 0x998	
	GameTime_t m_LastEnterTime; // 0x99c	
	float m_LastExitWeight; // 0x9a0	
	GameTime_t m_LastExitTime; // 0x9a4	
	// MNetworkEnable
	bool m_bEnabled; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09a9[0x3]; // 0x9a9
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x9ac	
	// MNetworkEnable
	float m_FadeDuration; // 0x9b0	
	// MNetworkEnable
	float m_Weight; // 0x9b4	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x9b8	
};

