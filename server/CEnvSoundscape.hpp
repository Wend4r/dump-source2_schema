#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CEnvSoundscape : public CBaseEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x4e0	
	float m_flRadius; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_soundEventName; // 0x510	
	bool m_bOverrideWithEvent; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
public:
	int32_t m_soundscapeIndex; // 0x51c	
	int32_t m_soundscapeEntityListId; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	CUtlSymbolLarge m_positionNames[8]; // 0x528	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x568	
	bool m_bDisabled; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	CUtlSymbolLarge m_soundscapeName; // 0x570	
	uint32_t m_soundEventHash; // 0x578	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

