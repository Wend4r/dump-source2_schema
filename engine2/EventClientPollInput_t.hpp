#pragma once

#include <cstdint>

struct EngineLoopState_t;
// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
};

