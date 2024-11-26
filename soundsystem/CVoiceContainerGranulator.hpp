#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x198
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Granulator Container"
class CVoiceContainerGranulator : public CVoiceContainerBase
{
public:
	float m_flGrainLength; // 0xc0	
	float m_flGrainCrossfadeAmount; // 0xc4	
	float m_flStartJitter; // 0xc8	
	float m_flPlaybackJitter; // 0xcc	
	bool m_bShouldWraparound; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x7]; // 0xd1
public:
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // 0xd8	
};

