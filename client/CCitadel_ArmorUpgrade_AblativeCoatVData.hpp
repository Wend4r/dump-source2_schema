#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x15a8	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x15b8	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x15d8	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x15e8	
	float m_flOnBreakEffectDuration; // 0x15ec	
	float m_flOnRestoreEffectDuration; // 0x15f0	
};

