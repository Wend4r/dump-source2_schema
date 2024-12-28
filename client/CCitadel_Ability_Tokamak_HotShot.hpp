#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe68
// Has VTable
class CCitadel_Ability_Tokamak_HotShot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x178]; // 0xc98
public:
	float m_flDPS; // 0xe10	
	GameTime_t m_flNextDamageTick; // 0xe14	
	Vector m_vStart; // 0xe18	
	Vector m_vEnd; // 0xe24	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0xe30	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlameAnglesChanged"
	QAngle m_angBeamAngles; // 0xe48	
private:
	[[maybe_unused]] uint8_t __pad0e54[0xc]; // 0xe54
public:
	bool m_bNeedsBeamReset; // 0xe60	
};

