#pragma once

#include <cstdint>

// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct SteamAudioPathSettings_t
{
public:
	int32_t m_nNumVisSamples; // 0x0	
	float m_flProbeVisRadius; // 0x4	
	float m_flProbeVisThreshold; // 0x8	
	float m_flProbePathRange; // 0xc	
};

