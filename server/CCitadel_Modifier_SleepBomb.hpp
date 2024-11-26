#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x230
// Has VTable
class CCitadel_Modifier_SleepBomb : public CCitadelModifier
{
public:
	float m_flGoalHeight; // 0xc0	
	float m_flFallRate; // 0xc4	
	ParticleIndex_t m_nBombEffect; // 0xc8	
	CHandle< CBaseEntity > m_eIgnoreTarget; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x150]; // 0xd0
public:
	Vector m_vecOrigin; // 0x220	
};

