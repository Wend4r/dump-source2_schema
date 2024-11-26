#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a8
// Has VTable
class CEnvMicrophone : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4ec	
	SoundTypes_t m_nSoundType; // 0x4f0	
	SoundFlags_t m_nSoundFlags; // 0x4f2	
	float m_flSensitivity; // 0x4f4	
	float m_flSmoothFactor; // 0x4f8	
	float m_flMaxRange; // 0x4fc	
	CUtlSymbolLarge m_iszSpeakerName; // 0x500	
	CHandle< CBaseEntity > m_hSpeaker; // 0x508	
	bool m_bAvoidFeedback; // 0x50c	
private:
	[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
public:
	int32_t m_iSpeakerDSPPreset; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	CUtlSymbolLarge m_iszListenFilter; // 0x518	
	CHandle< CBaseFilter > m_hListenFilter; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x528	
	CEntityIOOutput m_OnRoutedSound; // 0x550	
	CEntityIOOutput m_OnHeardSound; // 0x578	
	char m_szLastSound[256]; // 0x5a0	
	int32_t m_iLastRoutedFrame; // 0x6a0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetSpeakerName; // 0x0
};

