#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1580
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStormCloudVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // 0x1560	
	// MPropertyStartGroup "Gameplay"
	float m_flOscillateFrequency; // 0x1570	
	float m_flOscillateSpeed; // 0x1574	
	float m_flOscillateSpeedStart; // 0x1578	
	float m_flOscillateStartOffset; // 0x157c	
};

