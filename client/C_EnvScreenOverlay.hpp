#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class C_EnvScreenOverlay : public C_PointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x560	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x5b0	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x5d8	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x5dc	
	// MNetworkEnable
	bool m_bIsActive; // 0x5e0	
	bool m_bWasActive; // 0x5e1	
private:
	[[maybe_unused]] uint8_t __pad05e2[0x2]; // 0x5e2
public:
	int32_t m_iCachedDesiredOverlay; // 0x5e4	
	int32_t m_iCurrentOverlay; // 0x5e8	
	GameTime_t m_flCurrentOverlayTime; // 0x5ec	
};

