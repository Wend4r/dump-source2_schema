#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
class CProjectile_Mirage_Tornado : public CCitadelProjectile
{
public:
	int32_t m_cTicksNoMovement; // 0x870	
	CHandle< CAbility_Mirage_Tornado > m_TornadoAbility; // 0x874	
};

