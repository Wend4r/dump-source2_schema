#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x880
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CheatDeathImmunityVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffPlayerParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_StatusEffect; // 0x7a0	
};

