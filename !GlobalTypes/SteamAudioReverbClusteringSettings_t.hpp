#pragma once

#include <cstdint>

// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct SteamAudioReverbClusteringSettings_t
{
public:
	bool m_bEnableClustering; // 0x0	
	int32_t m_nCubeMapResolution; // 0x4	
	float m_flDepthThreshold; // 0x8	
};

