#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftExplodeTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x630	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x650	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x660	
};

