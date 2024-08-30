#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x1870	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x1950	
	CSoundEventName m_SelfPortalSound; // 0x1960	
	CSoundEventName m_WindupSound; // 0x1970	
	CSoundEventName m_PunchSound; // 0x1980	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // 0x1990	
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x19a0	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x19b0	
	float m_flSelfPortalTelegraphTime; // 0x19b4	
	float m_flWindupTime; // 0x19b8	
	float m_flAttackTime; // 0x19bc	
	float m_flGroundTraceOnPlayerHitDistance; // 0x19c0	
	float m_flPlayerCheckSphereRadius; // 0x19c4	
};

