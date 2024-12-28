#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Tokamak_HotShot : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x178]; // 0xaf8
public:
	float m_flDPS; // 0xc70	
	GameTime_t m_flNextDamageTick; // 0xc74	
	Vector m_vStart; // 0xc78	
	Vector m_vEnd; // 0xc84	
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0xc90	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xca8	
};

