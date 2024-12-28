#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1768
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_BigBoltVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootDelayParticle; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1728	
	CEmbeddedSubclass< CCitadelModifier > m_BoltHitModifier; // 0x1738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBoltDelay; // 0x1748	
	CSoundEventName m_strBoltFire; // 0x1758	
};

