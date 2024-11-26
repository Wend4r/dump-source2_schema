#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x11a0
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x618]; // 0xb00
public:
	GameTime_t m_flNextDamageTick; // 0x1118	
	Vector m_vStart; // 0x111c	
	Vector m_vEnd; // 0x1128	
private:
	[[maybe_unused]] uint8_t __pad1134[0x3c]; // 0x1134
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x1170	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1188	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0x1194	
};

