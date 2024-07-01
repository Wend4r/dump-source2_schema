#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_TimerToSilence; // 0x5e0	
	float m_SilenceDuration; // 0x5e4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x5e8	
};

