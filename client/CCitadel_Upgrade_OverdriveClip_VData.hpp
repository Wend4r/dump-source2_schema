#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_OverdriveClip_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_OverdriveClipModifier; // 0x15a8	
	CEmbeddedSubclass< CCitadelModifier > m_ReloadModifier; // 0x15b8	
};

