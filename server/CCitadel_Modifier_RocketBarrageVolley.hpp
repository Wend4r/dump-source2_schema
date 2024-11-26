#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x350
// Has VTable
class CCitadel_Modifier_RocketBarrageVolley : public CCitadelModifier
{
public:
	float m_flFiringInterval; // 0xc0	
	GameTime_t m_flCastTime; // 0xc4	
	GameTime_t m_flNextRocketTime; // 0xc8	
	int32_t m_nGrenadesLeft; // 0xcc	
};

