#pragma once

#include <cstdint>

// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct SteamAudioReverbSettings_t
{
public:
	int32_t m_nNumRays; // 0x0	
	int32_t m_nNumBounces; // 0x4	
	float m_flIRDuration; // 0x8	
	int32_t m_nAmbisonicsOrder; // 0xc	
};

