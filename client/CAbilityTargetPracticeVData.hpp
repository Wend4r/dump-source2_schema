#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetPracticeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeSelfModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeEnemyModifier; // 0x14f8	
};

