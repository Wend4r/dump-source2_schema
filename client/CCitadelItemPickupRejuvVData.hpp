#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelItemPickupRejuvVData : public CEntitySubclassVDataBase
{
public:
	CSubclassName< 4 > m_AbilityProjectile; // 0x28	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RejuvModifier; // 0x38	
	CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier; // 0x48	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // 0x58	
};
