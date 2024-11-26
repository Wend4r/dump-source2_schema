#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CBubbling : public CBaseModelEntity
{
public:
	int32_t m_density; // 0x7c0	
	int32_t m_frequency; // 0x7c4	
	int32_t m_state; // 0x7c8	
	
	// Datamap fields:
	// float m_flSpeed; // 0x354
	// void CBubblingFizzThink; // 0x0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetCurrent; // 0x0
	// int32_t InputSetDensity; // 0x0
	// int32_t InputSetFrequency; // 0x0
};

