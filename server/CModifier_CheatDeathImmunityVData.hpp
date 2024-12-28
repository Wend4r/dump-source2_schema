#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CheatDeathImmunityVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffPlayerParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_StatusEffect; // 0x7f0	
};

