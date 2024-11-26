#pragma once

#include <cstdint>

struct CSteamAudioProbeData;
// Registered binary: steamaudio.dll (project 'steamaudio')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CSteamAudioBakedMaterialsData
{
public:
	CSteamAudioProbeData m_probes; // 0x0	
	CUtlVector< uint32 > m_vecMaterialTokens; // 0x8	
};

