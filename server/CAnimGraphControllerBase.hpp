#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
// Is Abstract
class CAnimGraphControllerBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	CUtlVectorFixedGrowable< CGlobalSymbol, 8 > m_vecParamsToResetInPostGraphUpdate; // 0x28	
};

