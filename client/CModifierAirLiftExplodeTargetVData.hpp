#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x648
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftExplodeTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x608	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x618	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x628	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x638	
};

