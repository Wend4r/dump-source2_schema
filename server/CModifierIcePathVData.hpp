#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xab0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierIcePathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x7f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // 0x8d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // 0x9b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0xa90	
	CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // 0xaa0	
};

