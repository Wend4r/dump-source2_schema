#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_TimerToSilence; // 0x630	
	float m_SilenceDuration; // 0x634	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x638	
	// MPropertyStartGroup "Gameplay"
	bool m_bIsIdolPickup; // 0x648	
};

