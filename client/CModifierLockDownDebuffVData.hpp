#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa00
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLockDownDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // 0x8d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFollowLoop; // 0x9b0	
	CSoundEventName m_strExplodeSound; // 0x9c0	
	CSoundEventName m_strEscapedSound; // 0x9d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0x9e0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x9f0	
};

