#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CRemapValueUpdateItem
{
public:
	CAnimParamHandle m_hParamIn; // 0x0	
	CAnimParamHandle m_hParamOut; // 0x2	
	float m_flMinInputValue; // 0x4	
	float m_flMaxInputValue; // 0x8	
	float m_flMinOutputValue; // 0xc	
	float m_flMaxOutputValue; // 0x10	
};

