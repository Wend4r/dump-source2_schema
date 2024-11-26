#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierShadowStepVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x8d0	
	CEmbeddedSubclass< CCitadelModifier > m_ArmorDebuff; // 0x8e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisChangedEffect; // 0x8f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShadowRevealedEffect; // 0x9d0	
	// MPropertyStartGroup "Gameplay"
	float m_flMinInvisDuration; // 0xab0	
};

