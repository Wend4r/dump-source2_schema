#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1780
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x1560	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1570	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x1580	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x1660	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1740	
	CSoundEventName m_strGrappleHitTarget; // 0x1750	
	CSoundEventName m_strGrappleHitWorld; // 0x1760	
	CSoundEventName m_strGrappleHitNothing; // 0x1770	
};

