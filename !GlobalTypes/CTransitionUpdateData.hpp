#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 1
// Size: 0x3
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CTransitionUpdateData
{
public:
	uint8_t m_srcStateIndex; // 0x0	
	uint8_t m_destStateIndex; // 0x1	
	struct 
	{
		uint8_t m_nHandshakeMaskToDisableFirst: 7; 		
		uint8_t m_bDisabled: 1; 		
	}; // 8 bits
};

