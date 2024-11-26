#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier
{
public:
	int32_t m_MaxHealth; // 0xc0	
	GameTime_t m_flLastAttackedTime; // 0xc4	
	ParticleIndex_t m_nActiveShieldEffect; // 0xc8	
	bool m_bIsActive; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00cd[0x3]; // 0xcd
public:
	GameTime_t m_tActivationTime; // 0xd0	
};

