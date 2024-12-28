#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TrackingProjectileApplyModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // 0x15b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyOnlyModifier; // 0x16a0	
};

