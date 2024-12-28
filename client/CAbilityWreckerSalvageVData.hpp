#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1598
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerSalvageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SalvageEnemyModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_StunEnemyModifier; // 0x1578	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1588	
};

