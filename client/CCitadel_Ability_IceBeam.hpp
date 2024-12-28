#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1350
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x618]; // 0xc98
public:
	GameTime_t m_flNextDamageTick; // 0x12b0	
	Vector m_vStart; // 0x12b4	
	Vector m_vEnd; // 0x12c0	
private:
	[[maybe_unused]] uint8_t __pad12cc[0x3c]; // 0x12cc
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x1308	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1320	
private:
	[[maybe_unused]] uint8_t __pad132c[0x4]; // 0x132c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x1330	
private:
	[[maybe_unused]] uint8_t __pad133c[0xc]; // 0x133c
public:
	bool m_bNeedsBeamReset; // 0x1348	
};

