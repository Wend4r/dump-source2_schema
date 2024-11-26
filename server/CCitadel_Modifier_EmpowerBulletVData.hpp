#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_EmpowerBulletVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x738	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x748	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // 0x828	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmpowerWeaponParticle; // 0x908	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ShotVictimSound; // 0x9e8	
	CSoundEventName m_ShotConfirmationSound; // 0x9f8	
};

