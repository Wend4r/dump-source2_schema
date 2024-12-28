#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
class C_SoundEventEntity : public C_BaseEntity
{
public:
	bool m_bStartOnSpawn; // 0x560	
	bool m_bToLocalPlayer; // 0x561	
	bool m_bStopOnNew; // 0x562	
	bool m_bSaveRestore; // 0x563	
	bool m_bSavedIsPlaying; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	float m_flSavedElapsedTime; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x4]; // 0x56c
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x570	
	CUtlSymbolLarge m_iszAttachmentName; // 0x578	
	CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x580	
	CEntityIOOutput m_onSoundFinished; // 0x5a8	
	float m_flClientCullRadius; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d4[0x2c]; // 0x5d4
public:
	CUtlSymbolLarge m_iszSoundName; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0608[0x8]; // 0x608
public:
	CEntityHandle m_hSource; // 0x610	
	int32_t m_nEntityIndexSelection; // 0x614	
	struct 
	{
		uint8_t m_bClientSideOnly: 1; 		
		uint8_t __pad0: 1;
	}; // 2 bits
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSoundName; // 0x0
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// CUtlSymbolLarge InputStartSound; // 0x0
	// bool InputPauseSound; // 0x0
	// bool InputUnPauseSound; // 0x0
	// void InputStopSound; // 0x0
	// void m_nGUID; // 0x608
	// void C_SoundEventEntitySoundFinishedThink; // 0x0
};

