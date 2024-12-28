#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierShadowStepVData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x8f8	
	CEmbeddedSubclass< CCitadelModifier > m_ArmorDebuff; // 0x908	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisChangedEffect; // 0x918	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShadowRevealedEffect; // 0x9f8	
	// MPropertyStartGroup "Gameplay"
	float m_flMinInvisDuration; // 0xad8	
};

