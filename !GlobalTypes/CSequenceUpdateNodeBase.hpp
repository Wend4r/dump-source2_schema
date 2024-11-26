#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x78
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CSequenceUpdateNodeBase : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x14]; // 0x58
public:
	float m_playbackSpeed; // 0x6c	
	bool m_bLoop; // 0x70	
};

