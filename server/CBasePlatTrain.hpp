#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x860
// Has VTable
class CBasePlatTrain : public CBaseToggle
{
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x838	
	CUtlSymbolLarge m_NoiseArrived; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0848[0x8]; // 0x848
public:
	float m_volume; // 0x850	
	float m_flTWidth; // 0x854	
	float m_flTLength; // 0x858	
	
	// Datamap fields:
	// void m_pMovementSound; // 0x848
	// float rotation; // 0x7fffffff
};

