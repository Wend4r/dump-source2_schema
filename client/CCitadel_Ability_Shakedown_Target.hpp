#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
class CCitadel_Ability_Shakedown_Target : public C_CitadelBaseAbility
{
public:
	CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // 0xc60	
	Vector m_AimPos; // 0xc64	
};
