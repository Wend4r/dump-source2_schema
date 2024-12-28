#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd58
// Has VTable
class CCitadel_Ability_SettingSun : public CCitadelBaseAbility
{
public:
	bool m_bProjectileActive; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x18f]; // 0xaf9
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0ca0[0xb0]; // 0xca0
public:
	bool m_bWasSelected; // 0xd50	
};

