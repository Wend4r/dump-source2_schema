#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c0
// Has VTable
class CCitadel_Projectile_WreckingBall : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0870[0x10]; // 0x870
public:
	bool m_bBroken; // 0x880	
};

