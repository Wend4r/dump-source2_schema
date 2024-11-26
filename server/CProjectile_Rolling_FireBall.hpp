#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x880
// Has VTable
class CProjectile_Rolling_FireBall : public CCitadelProjectile
{
public:
	bool m_bHitWorld; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0871[0x3]; // 0x871
public:
	Vector m_vInitialDirection; // 0x874	
};

