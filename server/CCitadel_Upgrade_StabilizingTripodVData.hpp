#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1540
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_StabilizingTripodVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfDebuffModifier; // 0x1530	
};

