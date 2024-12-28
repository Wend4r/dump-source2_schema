#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CProjectile_Mirage_Tornado : public CCitadelProjectile
{
public:
	int32_t m_cTicksNoMovement; // 0x868	
	CHandle< CAbility_Mirage_Tornado > m_TornadoAbility; // 0x86c	
};

