#pragma once

#include <cstdint>

struct CSteamAudioProbeData;
struct SteamAudioReverbSettings_t;
struct SteamAudioReverbClusteringSettings_t;
struct SteamAudioReverbCompressionSettings_t;
// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CSteamAudioBakedReverbData
{
public:
	CSteamAudioProbeData m_probes; // 0x0	
	// -> m_nNumRays - 0x8
	// -> m_nNumBounces - 0xc
	// -> m_flIRDuration - 0x10
	// -> m_nAmbisonicsOrder - 0x14
	SteamAudioReverbSettings_t m_reverbSettings; // 0x8	
	// -> m_bEnableClustering - 0x18
	// -> m_nCubeMapResolution - 0x1c
	// -> m_flDepthThreshold - 0x20
	SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings; // 0x18	
	SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings; // 0x24	
};

