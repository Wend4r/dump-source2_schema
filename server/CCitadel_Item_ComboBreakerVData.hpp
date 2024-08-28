#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1550
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ComboBreakerVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ComboBreakerModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x1540	
};

