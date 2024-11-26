#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa80
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xa40	
private:
	[[maybe_unused]] uint8_t __pad0a41[0x3]; // 0xa41
public:
	int32_t m_iShapeType; // 0xa44	
	bool m_bConformToCollisionBounds; // 0xa48	
private:
	[[maybe_unused]] uint8_t __pad0a49[0x3]; // 0xa49
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xa4c	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

