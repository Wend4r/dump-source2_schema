#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1650
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDeferDamageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // 0x1568	
	// MPropertyStartGroup "+Defer Properties"
	float m_flDeferredDamageApplicationInterval; // 0x1648	
};

