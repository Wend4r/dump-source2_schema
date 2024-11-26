#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x1560	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x15d0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x17a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x1880	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x1960	
	CSoundEventName m_strImpactSound; // 0x1970	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x1980	
	float m_flForwardBoostSpeed; // 0x1984	
	float m_flUpBoostSpeed; // 0x1988	
	float m_flBoostTurnRate; // 0x198c	
	float m_flHoverTime; // 0x1990	
	float m_flMinAimAngle; // 0x1994	
	float m_flBoostGain; // 0x1998	
	float m_flBoostTime; // 0x199c	
	float m_flLandingTime; // 0x19a0	
	float m_flCrashSpeed; // 0x19a4	
	float m_flHoverInputSpeedMax; // 0x19a8	
	float m_flHoverInputAcceleration; // 0x19ac	
	float m_flHoverSpeedDecay; // 0x19b0	
};

