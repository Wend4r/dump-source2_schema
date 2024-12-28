#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x7f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnabledSound; // 0x8d0	
	CSoundEventName m_strEnabledLoopSound; // 0x8e0	
	CSoundEventName m_strDisabledSound; // 0x8f0	
	CSoundEventName m_strLaserHitSound; // 0x900	
	CSoundEventName m_strLaserStartSound; // 0x910	
	CSoundEventName m_strLaserLoopSound; // 0x920	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x930	
	CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // 0x940	
	CEmbeddedSubclass< CCitadelModifier > m_StatueInvis; // 0x950	
	// MPropertyStartGroup "GamePlay"
	float m_flNewTargetAttackTime; // 0x960	
	float m_flMinRevealTime; // 0x964	
	float m_flMinDebuffTime; // 0x968	
};

