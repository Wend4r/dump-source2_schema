#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_BaseProjectileAOEModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AOEModifier; // 0x15b0	
};

