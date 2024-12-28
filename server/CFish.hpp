#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
class CFish : public CBaseAnimGraph
{
public:
	CHandle< CFishPool > m_pool; // 0xa38	
	uint32_t m_id; // 0xa3c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0xa40	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0xa44	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0xa48	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0xa4c	
	float m_angleChange; // 0xa50	
	Vector m_forward; // 0xa54	
	Vector m_perp; // 0xa60	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xa6c	
	// MNetworkEnable
	float m_waterLevel; // 0xa78	
	float m_speed; // 0xa7c	
	float m_desiredSpeed; // 0xa80	
	float m_calmSpeed; // 0xa84	
	float m_panicSpeed; // 0xa88	
	float m_avoidRange; // 0xa8c	
	CountdownTimer m_turnTimer; // 0xa90	
	bool m_turnClockwise; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0x7]; // 0xaa9
public:
	CountdownTimer m_goTimer; // 0xab0	
	CountdownTimer m_moveTimer; // 0xac8	
	CountdownTimer m_panicTimer; // 0xae0	
	CountdownTimer m_disperseTimer; // 0xaf8	
	CountdownTimer m_proximityTimer; // 0xb10	
	CUtlVector< CFish* > m_visible; // 0xb28	
};

