#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_CheatDeathVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagePulseParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // 0x1690	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sHealPulseSound; // 0x1770	
	CSoundEventName m_sHealAndDamagePulseSound; // 0x1780	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeathImmuneModifier; // 0x1790	
};

