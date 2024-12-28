#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x1578	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1588	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x1598	
	CSoundEventName m_strChargeUpSound; // 0x15a8	
	CSoundEventName m_strPushAndDamage; // 0x15b8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x15c8	
};

