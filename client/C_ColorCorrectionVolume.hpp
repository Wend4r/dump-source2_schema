#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbc8
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
	float m_LastEnterWeight; // 0x9a0	
	GameTime_t m_LastEnterTime; // 0x9a4	
	float m_LastExitWeight; // 0x9a8	
	GameTime_t m_LastExitTime; // 0x9ac	
	// MNetworkEnable
	bool m_bEnabled; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x3]; // 0x9b1
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x9b4	
	// MNetworkEnable
	float m_FadeDuration; // 0x9b8	
	// MNetworkEnable
	float m_Weight; // 0x9bc	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x9c0	
};

