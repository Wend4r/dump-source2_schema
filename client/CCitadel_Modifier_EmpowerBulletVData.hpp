#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa30
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_EmpowerBulletVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x760	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x770	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // 0x850	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmpowerWeaponParticle; // 0x930	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ShotVictimSound; // 0xa10	
	CSoundEventName m_ShotConfirmationSound; // 0xa20	
};

