#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class CEnvScreenOverlay : public CPointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4e8	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x538	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x560	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x564	
	// MNetworkEnable
	bool m_bIsActive; // 0x568	
	
	// Datamap fields:
	// void InputStartOverlay; // 0x0
	// void InputStopOverlay; // 0x0
	// int32_t InputSwitchOverlay; // 0x0
};

