#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffSelf; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffEnemy; // 0x8d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReflectedBulletTracerParticle; // 0x9b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0xa90	
	CSoundEventName m_strVictimHitSound; // 0xaa0	
};

