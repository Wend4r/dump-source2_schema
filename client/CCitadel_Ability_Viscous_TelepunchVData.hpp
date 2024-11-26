#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a38
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1800	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x18e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x19c0	
	CSoundEventName m_SelfPortalSound; // 0x19d0	
	CSoundEventName m_WindupSound; // 0x19e0	
	CSoundEventName m_PunchSound; // 0x19f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // 0x1a00	
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1a10	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x1a20	
	float m_flSelfPortalTelegraphTime; // 0x1a24	
	float m_flWindupTime; // 0x1a28	
	float m_flAttackTime; // 0x1a2c	
	float m_flGroundTraceOnPlayerHitDistance; // 0x1a30	
	float m_flPlayerCheckSphereRadius; // 0x1a34	
};

