#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x880
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x860	
	bool m_activated; // 0x864	
private:
	[[maybe_unused]] uint8_t __pad0865[0x3]; // 0x865
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x868	
	float m_flBlockDamage; // 0x86c	
	GameTime_t m_flNextBlockTime; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0874[0x4]; // 0x874
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x878	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

