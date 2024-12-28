#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x878
// Has VTable
class CProjectile_Rolling_FireBall : public CCitadelProjectile
{
public:
	bool m_bHitWorld; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
public:
	Vector m_vInitialDirection; // 0x86c	
};

