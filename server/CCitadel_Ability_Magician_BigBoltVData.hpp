#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1760
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_BigBoltVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootDelayParticle; // 0x1640	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1720	
	CEmbeddedSubclass< CCitadelModifier > m_BoltHitModifier; // 0x1730	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBoltDelay; // 0x1740	
	CSoundEventName m_strBoltFire; // 0x1750	
};

