#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CBubbling : public CBaseModelEntity
{
public:
	int32_t m_density; // 0x710	
	int32_t m_frequency; // 0x714	
	int32_t m_state; // 0x718	
	
	// Datamap fields:
	// float m_flSpeed; // 0x324
	// void CBubblingFizzThink; // 0x0
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetCurrent; // 0x0
	// int32_t InputSetDensity; // 0x0
	// int32_t InputSetFrequency; // 0x0
};
