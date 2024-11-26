#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // 0x618	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // 0x628	
	// MPropertyStartGroup "Gameplay"
	float m_flTraceLengthMin; // 0x638	
};

