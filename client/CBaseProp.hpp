#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb38
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	int32_t m_iShapeType; // 0xafc	
	bool m_bConformToCollisionBounds; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xb04	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

