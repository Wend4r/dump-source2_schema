#pragma once

#include <cstdint>

struct CSteamAudioProbeData;
// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CSteamAudioBakedOcclusionData
{
public:
	CSteamAudioProbeData m_probes; // 0x0	
	CUtlVector< float32 > m_vecOcclusion; // 0x8	
};

