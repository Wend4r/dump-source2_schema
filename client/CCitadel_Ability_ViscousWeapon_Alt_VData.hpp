#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViscousWeapon_Alt_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strChargingParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FiringParticle; // 0x1728	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1808	
	CSoundEventName m_ChargeSound; // 0x1818	
	CSoundEventName m_ShootSound; // 0x1828	
};

