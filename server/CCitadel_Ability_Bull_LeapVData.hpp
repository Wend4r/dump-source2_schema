#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x1568	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x15a8	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x15b8	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x1888	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x1968	
	CSoundEventName m_strImpactSound; // 0x1978	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x1988	
	float m_flForwardBoostSpeed; // 0x198c	
	float m_flUpBoostSpeed; // 0x1990	
	float m_flBoostTurnRate; // 0x1994	
	float m_flHoverTime; // 0x1998	
	float m_flMinAimAngle; // 0x199c	
	float m_flBoostGain; // 0x19a0	
	float m_flBoostTime; // 0x19a4	
	float m_flLandingTime; // 0x19a8	
	float m_flCrashSpeed; // 0x19ac	
	float m_flHoverInputSpeedMax; // 0x19b0	
	float m_flHoverInputAcceleration; // 0x19b4	
	float m_flHoverSpeedDecay; // 0x19b8	
};

