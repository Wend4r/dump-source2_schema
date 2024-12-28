#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // 0x650	
	// MPropertyStartGroup "Gameplay"
	float m_flTraceLengthMin; // 0x660	
};

