#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x888
// Has VTable
class CFuncTrain : public CBasePlatTrain
{
public:
	CHandle< CBaseEntity > m_hCurrentTarget; // 0x868	
	bool m_activated; // 0x86c	
private:
	[[maybe_unused]] uint8_t __pad086d[0x3]; // 0x86d
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x870	
	float m_flBlockDamage; // 0x874	
	GameTime_t m_flNextBlockTime; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
public:
	CUtlSymbolLarge m_iszLastTarget; // 0x880	
	
	// Datamap fields:
	// void CFuncTrainWait; // 0x0
	// void CFuncTrainNext; // 0x0
	// void InputToggle; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
};

