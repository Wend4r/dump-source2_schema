#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAddUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0090[0x4]; // 0x90
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x94	
	bool m_bApplyToFootMotion; // 0x98	
	bool m_bApplyChannelsSeparately; // 0x99	
	bool m_bUseModelSpace; // 0x9a	
	bool m_bApplyScale; // 0x9b	
};

