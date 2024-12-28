#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CCitadel_Projectile_WreckingBall : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0868[0x10]; // 0x868
public:
	bool m_bBroken; // 0x878	
};

