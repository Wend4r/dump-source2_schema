#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
class C_Fish : public CBaseAnimGraph
{
public:
	Vector m_pos; // 0xaf8	
	Vector m_vel; // 0xb04	
	QAngle m_angles; // 0xb10	
	int32_t m_localLifeState; // 0xb1c	
	float m_deathDepth; // 0xb20	
	float m_deathAngle; // 0xb24	
	float m_buoyancy; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b2c[0x4]; // 0xb2c
public:
	// -> m_duration - 0xb38
	// -> m_timestamp - 0xb3c
	// -> m_timescale - 0xb40
	// -> m_nWorldGroupId - 0xb44
	CountdownTimer m_wiggleTimer; // 0xb30	
	float m_wigglePhase; // 0xb48	
	float m_wiggleRate; // 0xb4c	
	Vector m_actualPos; // 0xb50	
	QAngle m_actualAngles; // 0xb5c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xb68	
	// MNetworkEnable
	float m_waterLevel; // 0xb74	
	bool m_gotUpdate; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b79[0x3]; // 0xb79
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xb7c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xb80	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xb84	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xb88	
	float m_errorHistory[20]; // 0xb8c	
	int32_t m_errorHistoryIndex; // 0xbdc	
	int32_t m_errorHistoryCount; // 0xbe0	
	float m_averageError; // 0xbe4	
};

