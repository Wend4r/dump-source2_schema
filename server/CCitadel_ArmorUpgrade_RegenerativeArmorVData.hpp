#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_RegenerativeArmorVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // 0x15a8	
};

