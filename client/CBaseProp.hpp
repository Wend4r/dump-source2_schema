#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfc8
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xf88	
private:
	[[maybe_unused]] uint8_t __pad0f89[0x3]; // 0xf89
public:
	int32_t m_iShapeType; // 0xf8c	
	bool m_bConformToCollisionBounds; // 0xf90	
private:
	[[maybe_unused]] uint8_t __pad0f91[0x3]; // 0xf91
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xf94	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

