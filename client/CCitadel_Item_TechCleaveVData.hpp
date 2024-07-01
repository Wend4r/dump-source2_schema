#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechCleaveVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TechCleaveModifier; // 0x1528	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sCleaveProcSound; // 0x1538	
};

