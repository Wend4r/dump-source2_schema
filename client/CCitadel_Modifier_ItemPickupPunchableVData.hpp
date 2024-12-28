#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemPickupPunchableVData : public CCitadelModifierVData
{
public:
	float m_flPhysicsRadius; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // 0x638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsPunchableParticle; // 0x718	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsFrozenParticle; // 0x7f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearRejuvAuraModifier; // 0x8d8	
};

