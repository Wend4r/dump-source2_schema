#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Disarm_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16b8	
};

