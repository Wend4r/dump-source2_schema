#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1198
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x618]; // 0xaf8
public:
	GameTime_t m_flNextDamageTick; // 0x1110	
	Vector m_vStart; // 0x1114	
	Vector m_vEnd; // 0x1120	
private:
	[[maybe_unused]] uint8_t __pad112c[0x3c]; // 0x112c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x1168	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1180	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0x118c	
};

