#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CheatDeathImmunityVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffPlayerParticle; // 0x6d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_StatusEffect; // 0x7b8	
};
