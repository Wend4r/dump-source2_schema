#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x950
// Has VTable
class CCitadelBoomerangProjectile : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad07f8[0x150]; // 0x7f8
public:
	bool m_bReturning; // 0x948	
};

