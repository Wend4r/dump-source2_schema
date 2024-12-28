#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
// Has VTable
class CPathAccompany : public C_BaseEntity
{
public:
	float m_flPathLength; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
public:
	CUtlVector< PathAccompanyNode_t > m_vecNodes; // 0x568	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
};

