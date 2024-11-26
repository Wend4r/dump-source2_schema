#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class CRandStopwatch : public CStopwatchBase
{
public:
	float m_flMinInterval; // 0xc	
	float m_flMaxInterval; // 0x10	
};

