#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPathAccompany : public CBaseEntity
{
public:
	float m_flPathLength; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlVector< PathAccompanyNode_t > m_vecNodes; // 0x4e8	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
};

