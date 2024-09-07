#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
class CVSound
{
public:
	int32_t m_nRate; // 0x0	
	CVSoundFormat_t m_nFormat; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	uint32_t m_nChannels; // 0x8	
	int32_t m_nLoopStart; // 0xc	
	uint32_t m_nSampleCount; // 0x10	
	float m_flDuration; // 0x14	
	CUtlVector< CAudioSentence > m_Sentences; // 0x18	
	uint32_t m_nStreamingSize; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	CUtlVector< int32 > m_nSeekTable; // 0x38	
	int32_t m_nLoopEnd; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MFgdFromSchemaCompletelySkipField
	CUtlBinaryBlock m_encodedHeader; // 0x58	
};

