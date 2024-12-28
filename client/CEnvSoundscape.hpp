#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
class CEnvSoundscape : public C_BaseEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x560	
	float m_flRadius; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad058c[0x4]; // 0x58c
public:
	CUtlSymbolLarge m_soundEventName; // 0x590	
	bool m_bOverrideWithEvent; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad0599[0x3]; // 0x599
public:
	int32_t m_soundscapeIndex; // 0x59c	
	int32_t m_soundscapeEntityListId; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a4[0x4]; // 0x5a4
public:
	CUtlSymbolLarge m_positionNames[8]; // 0x5a8	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x5e8	
	bool m_bDisabled; // 0x5ec	
private:
	[[maybe_unused]] uint8_t __pad05ed[0x3]; // 0x5ed
public:
	CUtlSymbolLarge m_soundscapeName; // 0x5f0	
	uint32_t m_soundEventHash; // 0x5f8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

