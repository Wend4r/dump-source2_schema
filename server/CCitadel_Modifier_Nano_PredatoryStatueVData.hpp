#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x6e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x7c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnabledSound; // 0x8a8	
	CSoundEventName m_strEnabledLoopSound; // 0x8b8	
	CSoundEventName m_strDisabledSound; // 0x8c8	
	CSoundEventName m_strLaserHitSound; // 0x8d8	
	CSoundEventName m_strLaserStartSound; // 0x8e8	
	CSoundEventName m_strLaserLoopSound; // 0x8f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x908	
	CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // 0x918	
	CEmbeddedSubclass< CCitadelModifier > m_StatueInvis; // 0x928	
	// MPropertyStartGroup "GamePlay"
	float m_flNewTargetAttackTime; // 0x938	
	float m_flMinRevealTime; // 0x93c	
	float m_flMinDebuffTime; // 0x940	
};

