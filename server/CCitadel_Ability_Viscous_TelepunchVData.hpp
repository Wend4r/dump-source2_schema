#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a40
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1808	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x18e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x19c8	
	CSoundEventName m_SelfPortalSound; // 0x19d8	
	CSoundEventName m_WindupSound; // 0x19e8	
	CSoundEventName m_PunchSound; // 0x19f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // 0x1a08	
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1a18	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x1a28	
	float m_flSelfPortalTelegraphTime; // 0x1a2c	
	float m_flWindupTime; // 0x1a30	
	float m_flAttackTime; // 0x1a34	
	float m_flGroundTraceOnPlayerHitDistance; // 0x1a38	
	float m_flPlayerCheckSphereRadius; // 0x1a3c	
};

