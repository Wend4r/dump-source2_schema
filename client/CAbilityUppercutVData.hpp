#pragma once

#include <cstdint>

struct AttackData_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1af0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x1590	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1ab8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1ac8	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1ad8	
	// MPropertyStartGroup "Gameplay"
	float m_flMaxPitchUp; // 0x1ae8	
	float m_flTossDuration; // 0x1aec	
};

