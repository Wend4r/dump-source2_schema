#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityKobunVData : public CitadelAbilityVData
{
public:
	Vector m_vSummonFollowOffset; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad1574[0x4]; // 0x1574
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // 0x1578	
};

