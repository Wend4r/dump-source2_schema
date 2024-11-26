#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1358
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x618]; // 0xca0
public:
	GameTime_t m_flNextDamageTick; // 0x12b8	
	Vector m_vStart; // 0x12bc	
	Vector m_vEnd; // 0x12c8	
private:
	[[maybe_unused]] uint8_t __pad12d4[0x3c]; // 0x12d4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x1310	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1328	
private:
	[[maybe_unused]] uint8_t __pad1334[0x4]; // 0x1334
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x1338	
private:
	[[maybe_unused]] uint8_t __pad1344[0xc]; // 0x1344
public:
	bool m_bNeedsBeamReset; // 0x1350	
};

