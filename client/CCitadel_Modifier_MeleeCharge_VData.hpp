#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MeleeCharge_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x660	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x740	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ReloadVisualModifier; // 0x820	
	CEmbeddedSubclass< CCitadelModifier > m_AmmoAddedVisualModifier; // 0x830	
};

