#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_FleetfootBoots_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsBonusClipModifier; // 0x15c0	
};

