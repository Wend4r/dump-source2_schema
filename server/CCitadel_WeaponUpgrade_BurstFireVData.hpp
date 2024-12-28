#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_BurstFireVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ActivationSound; // 0x15b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15c0	
};

