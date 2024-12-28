#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CCitadelBoomerangProjectile : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0868[0x150]; // 0x868
public:
	bool m_bReturning; // 0x9b8	
};

