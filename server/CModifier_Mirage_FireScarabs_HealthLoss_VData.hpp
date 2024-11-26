#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_FireScarabs_HealthLoss_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SiphonParticle; // 0x608	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x6e8	
};

