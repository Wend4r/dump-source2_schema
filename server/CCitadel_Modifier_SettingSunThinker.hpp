#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_SettingSunThinker : public CCitadelModifier
{
public:
	float m_flTickInterval; // 0xc0	
	float m_flRadius; // 0xc4	
	float m_CenterRadius; // 0xc8	
	float m_CenterDamage; // 0xcc	
	float m_OuterDamage; // 0xd0	
	float m_StunDuration; // 0xd4	
	float m_TargetingDuration; // 0xd8	
	float m_ShootDuration; // 0xdc	
	bool m_bTargetingCompleted; // 0xe0	
	bool m_bSecondHit; // 0xe1	
	bool m_bTwoHits; // 0xe2	
};

