#pragma once

#include <cstdint>

struct CSteamAudioProbeData;
// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CSteamAudioBakedDimensionsData
{
public:
	CSteamAudioProbeData m_probes; // 0x0	
	CUtlVector< float32 > m_vecInOut; // 0x8	
	CUtlVector< float32 > m_vecSize; // 0x20	
};

