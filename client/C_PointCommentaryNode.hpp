#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb48
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
class C_PointCommentaryNode : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	// MNetworkEnable
	bool m_bActive; // 0xb00	
	bool m_bWasActive; // 0xb01	
private:
	[[maybe_unused]] uint8_t __pad0b02[0x2]; // 0xb02
public:
	GameTime_t m_flEndTime; // 0xb04	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xb08	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xb0c	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xb10	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xb18	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xb20	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xb28	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xb2c	
	// MNetworkEnable
	bool m_bListenedTo; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b31[0xf]; // 0xb31
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xb40	
	bool m_bRestartAfterRestore; // 0xb44	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xb38
};

