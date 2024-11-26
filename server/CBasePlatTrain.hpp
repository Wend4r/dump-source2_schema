#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x840	
	CUtlSymbolLarge m_NoiseArrived; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0850[0x8]; // 0x850
public:
	float m_volume; // 0x858	
	float m_flTWidth; // 0x85c	
	float m_flTLength; // 0x860	
	
	// Datamap fields:
	// void m_pMovementSound; // 0x850
	// float rotation; // 0x7fffffff
};

