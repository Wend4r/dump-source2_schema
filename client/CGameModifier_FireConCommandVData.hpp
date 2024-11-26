#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x618
// Has VTable
// 
// MGetKV3ClassDefaults
class CGameModifier_FireConCommandVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Fire Con Command"
	// MPropertyDescription "ConCommand to fire when modifier added."
	CUtlString m_FireOnAdded; // 0x608	
	// MPropertyDescription "ConCommand to fire when modifier removed."
	CUtlString m_FireOnRemoved; // 0x610	
};

