#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x608
// Has VTable
class CEnvSoundscape : public C_BaseEntity
{
public:
	CEntityIOOutput m_OnPlay; // 0x568	
	float m_flRadius; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0594[0x4]; // 0x594
public:
	CUtlSymbolLarge m_soundEventName; // 0x598	
	bool m_bOverrideWithEvent; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a1[0x3]; // 0x5a1
public:
	int32_t m_soundscapeIndex; // 0x5a4	
	int32_t m_soundscapeEntityListId; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05ac[0x4]; // 0x5ac
public:
	CUtlSymbolLarge m_positionNames[8]; // 0x5b0	
	CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x5f0	
	bool m_bDisabled; // 0x5f4	
private:
	[[maybe_unused]] uint8_t __pad05f5[0x3]; // 0x5f5
public:
	CUtlSymbolLarge m_soundscapeName; // 0x5f8	
	uint32_t m_soundEventHash; // 0x600	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggleEnabled; // 0x0
};

