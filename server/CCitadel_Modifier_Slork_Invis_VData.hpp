#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Slork_Invis_VData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x898	
	CEmbeddedSubclass< CCitadelModifier > m_VisibleModifier; // 0x8a8	
};

