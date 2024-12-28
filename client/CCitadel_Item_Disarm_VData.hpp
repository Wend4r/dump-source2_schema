#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Disarm_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16c0	
};

