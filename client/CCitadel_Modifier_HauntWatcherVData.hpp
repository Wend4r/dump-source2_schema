#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HauntWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HauntDamageModifier; // 0x638	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x648	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x658	
};

