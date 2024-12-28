#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1788
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x1568	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x1668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1748	
	CSoundEventName m_strGrappleHitTarget; // 0x1758	
	CSoundEventName m_strGrappleHitWorld; // 0x1768	
	CSoundEventName m_strGrappleHitNothing; // 0x1778	
};

