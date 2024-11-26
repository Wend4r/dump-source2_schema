#pragma once

#include <cstdint>

struct AttackData_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ae0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x1580	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1aa8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1ab8	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1ac8	
	// MPropertyStartGroup "Gameplay"
	float m_flMaxPitchUp; // 0x1ad8	
};

