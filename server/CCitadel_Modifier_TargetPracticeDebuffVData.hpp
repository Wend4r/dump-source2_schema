#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x618	
	CEmbeddedSubclass< CCitadelModifier > m_EMPModifier; // 0x628	
};

