#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa78
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a39[0x3]; // 0xa39
public:
	int32_t m_iShapeType; // 0xa3c	
	bool m_bConformToCollisionBounds; // 0xa40	
private:
	[[maybe_unused]] uint8_t __pad0a41[0x3]; // 0xa41
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xa44	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

