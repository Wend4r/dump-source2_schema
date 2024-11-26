#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CSoundEventEntity : public CBaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x4e8	
	bool m_bToLocalPlayer; // 0x4e9	
	bool m_bStopOnNew; // 0x4ea	
	bool m_bSaveRestore; // 0x4eb	
	bool m_bSavedIsPlaying; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	float m_flSavedElapsedTime; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x4f8	
	CUtlSymbolLarge m_iszAttachmentName; // 0x500	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x508	
	CEntityIOOutput m_onSoundFinished; // 0x530	
	float m_flClientCullRadius; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x2c]; // 0x55c
public:
	CUtlSymbolLarge m_iszSoundName; // 0x588	
private:
	[[maybe_unused]] uint8_t __pad0590[0x8]; // 0x590
public:
	CEntityHandle m_hSource; // 0x598	
	int32_t m_nEntityIndexSelection; // 0x59c	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x590
	// void CSoundEventEntitySoundFinishedThink; // 0x0
};

