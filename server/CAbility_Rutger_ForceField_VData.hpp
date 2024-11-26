#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x1570	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1580	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x1590	
	CSoundEventName m_strChargeUpSound; // 0x15a0	
	CSoundEventName m_strPushAndDamage; // 0x15b0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x15c0	
};

