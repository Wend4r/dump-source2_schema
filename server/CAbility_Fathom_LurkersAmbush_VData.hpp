#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Fathom_LurkersAmbush_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LurkersAmbush_Invis > m_InvisModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // 0x1570	
	CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // 0x1580	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x1590	
};

