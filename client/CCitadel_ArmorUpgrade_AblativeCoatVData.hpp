#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x15e0	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x15f0	
	float m_flOnBreakEffectDuration; // 0x15f4	
	float m_flOnRestoreEffectDuration; // 0x15f8	
};

