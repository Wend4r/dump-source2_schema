#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class CFloatExponentialMovingAverage
{
public:
	bool m_bInitialized; // 0x0	
	float m_flAlpha; // 0x4	
	float m_flPreviousSample; // 0x8	
	float m_flAverage; // 0xc	
	float m_flAverageDelta; // 0x10	
};

