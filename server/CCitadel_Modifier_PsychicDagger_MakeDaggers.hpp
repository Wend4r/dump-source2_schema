#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x390
// Has VTable
class CCitadel_Modifier_PsychicDagger_MakeDaggers : public CCitadelModifier
{
public:
	int32_t m_iCurrentProjectile; // 0xc0	
	int32_t m_nDaggerCount; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c8[0x230]; // 0xc8
public:
	GameTime_t m_flLastDaggerSpawn; // 0x2f8	
	GameTime_t m_flLastDaggerShoot; // 0x2fc	
	bool m_bIsSpawning; // 0x300	
	bool m_bInterrupted; // 0x301	
private:
	[[maybe_unused]] uint8_t __pad0302[0x6]; // 0x302
public:
	CUtlVector< CCitadel_Modifier_PsychicDagger_MakeDaggers::Dagger_t > m_vecDaggers; // 0x308	
};

