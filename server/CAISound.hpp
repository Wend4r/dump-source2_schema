#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CAISound : public CPointEntity
{
public:
	SoundTypes_t m_iSoundType; // 0x4e8	
	SoundFlags_t m_iSoundFlags; // 0x4ea	
	int32_t m_iVolume; // 0x4ec	
	int32_t m_iSoundIndex; // 0x4f0	
	float m_flDuration; // 0x4f4	
	CUtlSymbolLarge m_iszProxyEntityName; // 0x4f8	
	
	// Datamap fields:
	// int32_t InputInsertSound; // 0x0
	// void InputEmitAISound; // 0x0
	// void InputStopAISound; // 0x0
};

